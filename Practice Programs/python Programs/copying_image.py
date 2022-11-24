f=open("download.png","rb")

f1=open("Python_image.png","wb")

for data in f:
    f1.write(data)