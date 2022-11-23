import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#bind s to localhost on port 8888
s.bind(('localhost', 8888))