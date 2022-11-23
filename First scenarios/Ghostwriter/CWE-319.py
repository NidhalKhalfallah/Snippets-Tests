import socket, ssl

#establish a connection to https://www.google.com/
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#connect to the server
s.connect(('www.google.com', 443))
#create a secure connection
s = ssl.wrap_socket(s)
#send the request
s.write('GET / HTTP/1.1\r\nHost: www.google.com\r\n\r\n')
#read the response
response = s.read()
#close the connection
s.close()
print(response)