import socket

c=socket.socket()

c.connect(("localhost",9992))

name=input("Enter you name:")

c.send(bytes(name,'utf-8'))

print(c.recv(1024).decode())
