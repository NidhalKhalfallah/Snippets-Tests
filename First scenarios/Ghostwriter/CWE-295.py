from paramiko.client import SSHClient, AutoAddPolicy, RejectPolicy
#define a function to open an SSH connection to example.com
def open_connection(host, username, password):
  # create an SSH client
  client = SSHClient()
  # set the policy to reject all password authentication attempts
  client.set_missing_host_key_policy(RejectPolicy())
  # connect to the server
  client.connect(host, username=username, password=password)
  # return the client
  return client