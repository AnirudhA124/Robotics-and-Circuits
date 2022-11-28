fname=input("Enter file name:")
fh=open(fname)
l=[]
l1=[]
l2=[]
l3=[]
count={}
l4=[]

for line in fh:
    if line.startswith("From"):
        l.append(line.split())
for i in range(len(l)):
    if l[i][0]!="From:":
        l1.append(l[i][5])
for i in l1:
    l2.append(i.split(":"))
for i in range(len(l2)):
    l3.append(l2[i][0])

for hours in l3:
    if hours not in count:
        count[hours]=1
    else:
        count[hours]=count[hours]+1

for k,v in count.items():
    l4.append((k,v))

l4=sorted(l4)
print(l4)

for k,v in l4:
    print(k,v)