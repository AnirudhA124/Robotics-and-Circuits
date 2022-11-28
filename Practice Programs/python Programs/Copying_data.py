f=open("Python.txt","r")

f1=open("Python_copy.txt","w")

for data in f:
    f1.write(data)
