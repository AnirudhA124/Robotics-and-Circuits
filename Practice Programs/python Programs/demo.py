<<<<<<< HEAD
fname=input("Enter file name:")
fh=open(fname)
l=[]
l1=[]


for line in fh:
    if line.startswith("From"):
        l.append(line.split())
for i in range(len(l)):
    if l[i][0]!="From:":
        l1.append(l[i][1])

count={}

for words in l1:
    if words not in count:
        count[words]=1
    else:
        count[words]=count[words]+1

print("Count is:",count)

bigcount=0
bigword=0

for word,c in count.items():
    if bigcount==0 or c>bigcount:
        bigword=word
        bigcount=c

print(word,c)

=======
fname=input("Enter file name:")
fh=open(fname)
l=[]
l1=[]


for line in fh:
    if line.startswith("From"):
        l.append(line.split())
for i in range(len(l)):
    if l[i][0]!="From:":
        l1.append(l[i][1])

count={}

for words in l1:
    if words not in count:
        count[words]=1
    else:
        count[words]=count[words]+1

print("Count is:",count)

bigcount=0
bigword=0

for word,c in count.items():
    if bigcount==0 or c>bigcount:
        bigword=word
        bigcount=c

print(word,c)

>>>>>>> a85ebff (Update 1)
