import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#bind socket to port
s.bind(('127.0.0.1', 8080))
#listen for incoming requests
s.listen(5)
while True:

    #accept connection from client and return socket object for communication with the client
    (clientsocket, address) = s.accept()

    print("Connection from : " + str(address))

    #receive data sent by the client 
    message = clientsocket.recv(2048).decode()

    print("Message from client: " + str(message))

     #send a reply to the client 
     if message == 'Hello':  				#if server receives Hello, it sends back world! 
        msg = 'World!'              		#msg is string variable which holds value of world! 
        clientsocket.send(msg.encode())   #encodes msg as bytes and send it to the socket object in argument
