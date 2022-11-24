import socket

s= socket.socket()

s.bind(("localhost",9992))
print("Socket created!")

s.listen(3)
print("Waiting....")

while True:
    c,addr=s.accept()
    c.send(bytes("Hello!!","utf-8"))
    name=s.recv(1024).decode()
    print("Connected with",addr,name)
    c.close()