import socket

s= socket.socket()
print("Socket created!!")

s.bind(("localhost",9999))

s.listen(3)
print("Waiting for request!")

while True:
    c,addr =s.accept()
    print("Connected with ",addr)

    c.send(bytes("Welcome to s!",'utf-8'))

    c.close()
