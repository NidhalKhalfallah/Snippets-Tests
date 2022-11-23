from paramiko.client import SSHClient, AutoAddPolicy, RejectPolicy
#define a function to open an SSH connection to example.com
def ssh_connect():
    ssh = SSHClient()
    ssh.set_missing_host_key_policy(AutoAddPolicy())
    ssh.connect('example.com', username='test', password='test')
    return ssh