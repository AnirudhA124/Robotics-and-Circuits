s1=input("Enter numbers (enter all the numbers at once using spces):")

s2=s1.split()
sum=0
for i in s2:
    x=int(i)
    sum=sum+x
print("The sum of entered numbers is:",sum)