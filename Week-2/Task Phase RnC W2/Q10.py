import string
import random

lst=[]
length=int(input("Enter length of string:"))

x=string.ascii_lowercase

for i in range(len(x)):
    lst.append(x[i])

y=string.ascii_uppercase

for i in range(len(y)):
    lst.append(y[i])

lst2=random.choices(lst,k=length)

print("The generated list is: ",end="")
for i in lst2:
    print(i,end="")