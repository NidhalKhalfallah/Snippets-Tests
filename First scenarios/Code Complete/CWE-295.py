from paramiko.client import SSHClient, AutoAddPolicy, RejectPolicy
#define a function to open an SSH connection to example.com
def ssh_connect(hostname, username, password):
    client = SSHClient()
    #accept all host keys (e.g. when connecting for the first time)
    client.set_missing_host_key_policy(AutoAddPolicy())

    try:
        print('Connecting to %s...' % hostname)
        client.connect(hostname, username=username, password=password)

        stdin, stdout, stderr = client.exec_command('ls -l')

        print('Here is the output of ls -l:
