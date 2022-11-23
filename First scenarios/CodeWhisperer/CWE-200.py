import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#bind s

host = socket.gethostname()

port = 9999

s.bind((host, port))