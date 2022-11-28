fname = input("Enter file name: ")
fh = open(fname)
s=0
count=0
for line in fh:
    if line.startswith("X-DSPAM"):
        x=line.find("0")
        y=float(x)
        #print(line[x:x+6])
    s=s+y
    count=count+1

av=s/(count)
print("Average is:",av)