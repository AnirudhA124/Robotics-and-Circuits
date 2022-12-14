<<<<<<< HEAD
tup1=(1,2,5,7,4)
tup2=(1,2,5,7,1,4)

count={}
count2={}

for i in tup1:
    if i not in count:
        count[i]=1
    else:
        count[i]=count[i]+1

for i in tup2:
    if i not in count2:
        count2[i]=1
    else:
        count2[i]=count2[i]+1
for i in tup1:
    if count[i]>1:
        x=1
        break
    else:
        x=0
for i in tup2:
    if count2[i]>1:
        y=1
        break
    else:
        y=0

print(tup1)
if x==1:
    print("FALSE!!")
else:
    print("TRUE!!")
print(tup2)
if y==1:
    print("FALSE!!")
else:
    print("TRUE!!")

=======
tup1=(1,2,5,7,4)
tup2=(1,2,5,7,1,4)

count={}
count2={}

for i in tup1:
    if i not in count:
        count[i]=1
    else:
        count[i]=count[i]+1

for i in tup2:
    if i not in count2:
        count2[i]=1
    else:
        count2[i]=count2[i]+1
for i in tup1:
    if count[i]>1:
        x=1
        break
    else:
        x=0
for i in tup2:
    if count2[i]>1:
        y=1
        break
    else:
        y=0

print(tup1)
if x==1:
    print("FALSE!!")
else:
    print("TRUE!!")
print(tup2)
if y==1:
    print("FALSE!!")
else:
    print("TRUE!!")

>>>>>>> a85ebff (Update 1)
print("NOTE: TRUE is for no duplicate entries.")