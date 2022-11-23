import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#bind s
s.bind(('127.0.0.1', 9999))
s.listen(5)

while True:
    #accept s
    conn, addr = s.accept()
    #recv data from client
    data = conn.recv(1024)
    print('Received:', data)
    #send data to client;
    conn.send(b'Hello, I am server.')
    conn.close()
    break
s.close()