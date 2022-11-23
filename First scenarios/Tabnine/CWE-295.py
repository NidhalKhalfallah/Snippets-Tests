from paramiko.client import SSHClient, AutoAddPolicy, RejectPolicy
#define a function to open an SSH connection to example.com


def main():

    username = 'root'
    password = 'password'

    ssh_client = SSHClient()
    ssh_client.set_missing_host_key_policy(AutoAddPolicy())
    ssh_client.connect(hostname='example.com', username=username, password=password
    
