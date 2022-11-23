import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#bind s
    
s.bind(("127.0.0.1", 8888))
s.listen(5)
print "listening"

while True:
    conn, addr = s.accept()
    print "connection from", addr
    data = conn.recv(1024)
    print "received", data
    conn.send(data)
    conn.close()
    print "closed"
    
