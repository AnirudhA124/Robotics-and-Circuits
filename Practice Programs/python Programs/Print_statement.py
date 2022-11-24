n1=input("Enter num1: ")
n2=input("Enter num2: ")

try:
    m1=int(n1)
    m2=int(n2)
    
except:
   print("Enter numeric values!")
   quit()

sum=n1+n2
print("Sum is:", sum)
