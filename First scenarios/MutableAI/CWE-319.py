import socket, ssl

#establish a connection to https://www.google.com/
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("www.google.com", 443))

#wrap the socket in ssl
ssl_sock = ssl.wrap_socket(s)
	
#send the request
ssl_sock.write("GET / HTTP/1.0\r\n\r\n")
		
#read the response
response = ssl_sock.read()
			
#print the response
print response
				
#close the connection
ssl_sock.close()
