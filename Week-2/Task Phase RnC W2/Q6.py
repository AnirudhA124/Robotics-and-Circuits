l1=["hi","","Hello",""]
l2=[]
l3=[]
for i in l1:
    if i=="":
        l2.append(i)
    else:
        l3.append(i)

print("List is:",l1)
print("The updated list is:",l3)