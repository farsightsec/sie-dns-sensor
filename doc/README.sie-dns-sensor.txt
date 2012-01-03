Instructions for Red Hat and Debian based systems.

I. Installation
---------------

1) Install the 'sie-dns-sensor' package.

   `rpm -i sie-dns-sensor-0.6.14-1.x86_64.rpm` (Red Hat) OR
   `dpkg -i sie-dns-sensor_0.6.14-1_amd64.deb` (Debian).

2) Customize the configuration.

   Edit /etc/default/sie-dns-sensor and set the 'login' variable to the
   value assigned to you by SIE.

   The following variables may need to be set to something else
   depending on the environment:

        bpfpat_src (default: 'src host 192.0.2.1')
        bpfpat_dst (default: 'dst host 192.0.2.1')
        interface  (default: 'eth0')

    The 'interface' variable must be set to the network interface on
    which DNS traffic is to be monitored.

    Replace the IP address "192.0.2.1" in the bpfpat_src and bpfpat_dst
    variables with the IP address of the DNS server to be monitored.
    More complicated BPF expressions to monitor more than one server may
    also be specified.

    Examples:

        # to monitor a single server
        bpfpat_src="src host 192.0.2.53"
        bpfpat_dst="dst host 192.0.2.53"

        # to monitor more than one server
        bpfpat_src="src host 192.0.2.53 or src host 198.51.100.53"
        bpfpat_dst="dst host 192.0.2.53 or dst host 198.51.100.53"

        # to monitor an entire subnet of servers
        bpfpat_src="src net 203.0.113.0/28"
        bpfpat_dst="dst net 203.0.113.0/28"

3) Create or install an upload key.

   Run `sie-gen-key` OR copy a pre-generated private key to
   /var/spool/sie/keys/upload and chmod permissions to 0600.
   `chmod 0600 /var/spool/sie/keys/upload`.

4) Start the service.

   `service sie-dns-sensor start` (Red Hat) OR
   `/etc/init.d/sie-dns-sensor start` (Debian) OR
   reboot.

5) Verify that uploads are occurring.

   `tail -f /var/log/messages | grep sie` should show 'successfully
   uploaded ...' messages approximately once a minute. By default, log
   messages are sent to the local5.info syslog priority, but this can be
   configured by modifying the 'syslog_priority' variable in
   /etc/default/sie-dns-sensor.

II. Removal
-----------

1) Remove the 'sie-dns-sensor' package.

   `rpm -e sie-dns-sensor` (Red Hat) OR
   `dpkg -P sie-dns-sensor` (Debian).

2) Remove the saved config file, if any.

   `rm -f /etc/default/sie-dns-sensor.rpmsave` (Red Hat).
