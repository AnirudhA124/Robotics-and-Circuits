import socket

mysock=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
mysock.connect(('data.pr4e.org',80))
cmd= 'GET / HTTP/1.1\r\nHost: data.pr4e.org/romeo.txt\r\n\r\n'.encode()  #encode to send data in utf-8 form
mysock.send(cmd)

while True:
    data=mysock.recv(512)
    if len(data)<1:
        break
    print(data.decode())
mysock.close()