<<<<<<< HEAD
fname=input("Enter file name:")
fh=open(fname,"r")
lst=[]
lst2=[]

for line in fh:
    lst.append(line.rstrip())
for i in lst:
    lst2.append(i.split())
print(lst2)
=======
fname=input("Enter file name:")
fh=open(fname,"r")
lst=[]
lst2=[]

for line in fh:
    lst.append(line.rstrip())
for i in lst:
    lst2.append(i.split())
print(lst2)
>>>>>>> a85ebff (Update 1)
