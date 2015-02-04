#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define SIZE 5
#define NUMB_THREADS  4
#define PRODUCER_LOOPS 2

typedef int buffer_t;
buffer_t buffer[SIZE];
int buffer_index;

pthread_mutex_t buffer_mutex;
sem_t full_sem;  // when 0, buffer is full 
sem_t empty_sem; // when 0, buffer is empty.

//calculating buffer index for producer 
void insertbuffer(buffer_t value) {
    if (buffer_index < SIZE) {
        buffer[buffer_index++] = value;
    } else {
        printf("Buffer overflow\n");
    }
}

//calculating buffer index for consumer
buffer_t dequeuebuffer() {
    if (buffer_index > 0) {
        return buffer[--buffer_index]; // buffer_index-- would be error!
    } else {
        printf("Buffer underflow\n");
    }
    return 0;
}


void *producer(void *thread_n) {
    //thread adds element to the buffer 
    int thread_numb = *(int *)thread_n;
    buffer_t value;
    int i=0;
    while (i++ < PRODUCER_LOOPS) {
        sleep(rand() % 10);
        value = rand() % 100;
        sem_wait(&full_sem); 
        pthread_mutex_lock(&buffer_mutex); // protecting critical section 
        insertbuffer(value);
        pthread_mutex_unlock(&buffer_mutex);
        sem_post(&empty_sem); // post (increment) emptybuffer semaphore
        printf("Producer %d added %d to buffer\n", thread_numb, value);
    }
    pthread_exit(0);
}

void *consumer(void *thread_n) {

    //thread consumes from buffer
    int thread_numb = *(int *)thread_n;
    buffer_t value;
    int i=0;
    while (i++ < PRODUCER_LOOPS) {
        sem_wait(&empty_sem);
        pthread_mutex_lock(&buffer_mutex);
        value = dequeuebuffer(value);
        pthread_mutex_unlock(&buffer_mutex);
        sem_post(&full_sem); 
        printf("Consumer %d dequeue %d from buffer\n", thread_numb, value);
   }
    pthread_exit(0);
}

int main(int argc, int **argv) {
    buffer_index = 0;

    //Initialize semaphores and mutex
    pthread_mutex_init(&buffer_mutex, NULL);
    sem_init(&full_sem,0,SIZE); 
    sem_init(&empty_sem, 0, 0);
    pthread_t thread[NUMB_THREADS];
    int thread_numb[NUMB_THREADS];
    int i;

   //create producer and consumer thread
    for (i = 0; i < NUMB_THREADS; ) {
        thread_numb[i] = i;
        pthread_create(thread + i, NULL, producer,thread_numb + i);  
        i++;
        thread_numb[i] = i;
        pthread_create(&thread[i], NULL, consumer, &thread_numb[i]);
        i++;
    }

    //join threads
    for (i = 0; i < NUMB_THREADS; i++)
        pthread_join(thread[i], NULL);

    //Destroy sem and mutex
    pthread_mutex_destroy(&buffer_mutex);
    sem_destroy(&full_sem);
    sem_destroy(&empty_sem);

    return 0;
}

