fname=input("Enter file name:")
fh=open(fname)
l=[]
l1=[]
count=0

for line in fh:
    if line.startswith("From"):
        l.append(line.split())
for i in range(len(l)):
    if l[i][0]!="From:":
        l1.append(l[i][1])
        count=count+1            
for i in l1:
    print(i)          
print("There were",count,"lines in the file with From as the first word")

