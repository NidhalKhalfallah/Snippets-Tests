from paramiko.client import SSHClient, AutoAddPolicy, RejectPolicy
#define a function to open an SSH connection to example.com

def ssh_connect(ip, username, password):
    client = SSHClient()
    client.set_missing_host_key_policy(AutoAddPolicy())
    client.connect(ip, username=username, password=password)
    return client