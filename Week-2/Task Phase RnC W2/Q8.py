<<<<<<< HEAD
tup=(('x',45),('y',12),('z',20))
lst=[]

for k,v in tup:
    lst.append((v,k))
    x=sorted(lst)

print("Initial tuple was:",tup)
=======
tup=(('x',45),('y',12),('z',20))
lst=[]

for k,v in tup:
    lst.append((v,k))
    x=sorted(lst)

print("Initial tuple was:",tup)
>>>>>>> a85ebff (Update 1)
print("Sorted tuple is:",tuple(x))