<<<<<<< HEAD


sen=input("Enter a sentence:")

lst=sen.split()

count={}

for words in lst:
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

=======


sen=input("Enter a sentence:")

lst=sen.split()

count={}

for words in lst:
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

>>>>>>> a85ebff (Update 1)
print(word,c)