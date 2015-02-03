Name:           Recursion
Version:        1.0
Release:        1%{?dist}
Group:          Utilities
Summary:        A Recursion program 
License:        GPL
Source0:        Recursion-1.0.tar.gz
BuildArch:      noarch
BuildRoot:      %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)


#BuildRequires: 
#Requires:      

%description
A demo program


%prep
%setup -q

%build
make 

%install
rm -rf $RPM_BUILD_ROOT
install -d $RPM_BUILD_ROOT/opt/Recursion-1.0
install Makefile $RPM_BUILD_ROOT/opt/Recursion-1.0/Makefile
install README $RPM_BUILD_ROOT/opt/Recursion-1.0/README
install -d $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static
install a.static/Makefile $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/Makefile
install a.static/README $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/README
install a.static/add.c $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/add.c
install a.static/add.h $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/add.h
install a.static/mean.c $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/mean.c
install a.static/mean.h $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/mean.h
install a.static/main.c $RPM_BUILD_ROOT/opt/Recursion-1.0/a.static/main.c
install -d $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic
install b.dynamic/Makefile $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/Makefile
install b.dynamic/README $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/README
install b.dynamic/add.c $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/add.c
install b.dynamic/add.h $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/add.h
install b.dynamic/mean.c $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/mean.c
install b.dynamic/mean.h $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/mean.h
install b.dynamic/main.c $RPM_BUILD_ROOT/opt/Recursion-1.0/b.dynamic/main.c

%clean
rm -rf $RPM_BUILD_ROOT


%files
%dir /opt/Recursion-1.0
%defattr(-,root,root,-)
/opt/Recursion-1.0/Makefile
/opt/Recursion-1.0/README
/opt/Recursion-1.0/a.static/Makefile
/opt/Recursion-1.0/a.static/README
/opt/Recursion-1.0/a.static/add.c
/opt/Recursion-1.0/a.static/add.h
/opt/Recursion-1.0/a.static/mean.c
/opt/Recursion-1.0/a.static/mean.h
/opt/Recursion-1.0/a.static/main.c
/opt/Recursion-1.0/b.dynamic/Makefile
/opt/Recursion-1.0/b.dynamic/README
/opt/Recursion-1.0/b.dynamic/add.c
/opt/Recursion-1.0/b.dynamic/add.h
/opt/Recursion-1.0/b.dynamic/mean.c
/opt/Recursion-1.0/b.dynamic/mean.h
/opt/Recursion-1.0/b.dynamic/main.c

%post
chmod 755 -R /opt/Recursion-1.0

