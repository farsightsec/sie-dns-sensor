Buildroot: /tmp/rpmbuild/sie-dns-sensor
Name: sie-dns-sensor
Version: @VERSION@
Release: @RELEASE@
Summary: SIE DNS sensor
License: multiple
Group: Applications/Internet
Prereq: /sbin/chkconfig /etc/init.d /sbin/service

%define _rpmdir .
%define _rpmfilename %%{NAME}-%%{VERSION}-%%{RELEASE}.%%{ARCH}.rpm
%define _unpackaged_files_terminate_build 0

%description
SIE DNS capture package

%post
/sbin/ldconfig
/sbin/chkconfig --add sie-dns-sensor

%preun
if [ "$1" = 0 ]; then
    /sbin/service sie-dns-sensor stop >/dev/null 2>&1
    /sbin/chkconfig --del sie-dns-sensor
fi

%postun
/sbin/ldconfig
if [ "$1" -ge "1" ]; then
    /sbin/service sie-dns-sensor condrestart >/dev/null 2>&1
fi

%files
%config(noreplace) /etc/default/sie-dns-sensor
%config /etc/rc.d/init.d/sie-dns-sensor
%config /etc/cron.d/sie-trim-spool
%dir /usr/
%dir /usr/bin/
/usr/bin/nmsgtool
/usr/bin/sie-gen-key
/usr/bin/sie-rsync
/usr/bin/sie-wrapsrv
%dir %{_libdir}
%{_libdir}/libnmsg.so
%{_libdir}/libnmsg.so.6
%{_libdir}/libnmsg.so.6.0.0
%dir %{_libdir}/nmsg
%{_libdir}/nmsg/nmsg_msg8_isc.so
%dir /usr/lib/
%dir /usr/lib/sie/
/usr/lib/sie/functions
/usr/lib/sie/sie-kicker
/usr/lib/sie/sie-trim-spool
%dir /var/
%dir /var/spool/
%dir /var/spool/sie
%dir /var/spool/sie/keys
/var/spool/sie/keys/known_hosts
%dir /var/spool/sie/locks
%dir /var/spool/sie/waiting
