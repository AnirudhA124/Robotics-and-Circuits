fname=input("Enter file name:")
fh=open(fname)

lst=[]
num=[]
s=0
count=0

for lines in fh:
    if lines.startswith("X-DSPAM-Confidence:"):
        lst.append(lines.split())
for i in range(len(lst)):
    x=lst[i][1]
    n=float(x)
    s=s+n
    count=count+1

avg=s/count
print("Average spam confidence:",avg)

