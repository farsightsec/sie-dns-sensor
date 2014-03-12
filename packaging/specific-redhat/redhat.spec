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

%pre
# NOTE: the %pre from the NEW version of the package is the one executed.
if [ "$1" -ge "2" ]; then
    # This is an upgrade.
    /sbin/service sie-dns-sensor stop 2>&1 || :
fi

%post
# NOTE: the %post from the NEW version of the package is the one executed.
/sbin/chkconfig --add sie-dns-sensor

%preun
# NOTE: the %preun from the OLD version of the package is the one executed.
if [ "$1" = 0 ]; then
    # This is an uninstall.
    /sbin/service sie-dns-sensor stop 2>&1 || :
    /sbin/chkconfig --del sie-dns-sensor
fi

%postun
# NOTE: the %postun from the OLD version of the package is the one executed.
if [ "$1" -ge "1" ]; then
    # This is an upgrade.
    /sbin/service sie-dns-sensor condrestart 2>&1 || :
fi

%posttrans
# NOTE: the %posttrans from the NEW version of the package is the one executed.
if [ "$1" = "0" ]; then
    # This is an install OR upgrade.
    # NOTE: %posttrans cannot distinguish between the two.
    /sbin/service sie-dns-sensor start 2>&1 || :
fi

%files
%config(noreplace) /etc/default/sie-dns-sensor
%config /etc/rc.d/init.d/sie-dns-sensor
%config /etc/cron.d/sie-trim-spool
%dir /usr/
%dir /usr/bin/
/usr/bin/sie-gen-key
/usr/bin/sie-rsync
/usr/bin/sie-wrapsrv
%dir %{_libdir}
%dir %{_libdir}/sie-dns-sensor
%{_libdir}/sie-dns-sensor/libnmsg.so.6
%{_libdir}/sie-dns-sensor/libnmsg.so.6.0.0
%{_libdir}/sie-dns-sensor/nmsgtool
%dir %{_libdir}/sie-dns-sensor/nmsg
%{_libdir}/sie-dns-sensor/nmsg/nmsg_msg8_isc.so
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
