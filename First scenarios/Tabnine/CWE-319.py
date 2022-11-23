import socket, ssl

#establish a connection to https://www.google.com/

def connect():
    try:
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.settimeout(5)
        sock.connect(("8.8.8.8", 80))
