<<<<<<< HEAD
score = input("Enter Score: ")
try:
    s=float(score)
except:
    print("Enter numeric value!")
    quit()
if(s>=0.9):
    print("A")
elif(s>=0.8):
    print("B")
elif(s>=0.7):
    print("C")
elif(s>=0.6):
    print("D")
elif(s<0.6):
=======
score = input("Enter Score: ")
try:
    s=float(score)
except:
    print("Enter numeric value!")
    quit()
if(s>=0.9):
    print("A")
elif(s>=0.8):
    print("B")
elif(s>=0.7):
    print("C")
elif(s>=0.6):
    print("D")
elif(s<0.6):
>>>>>>> a85ebff (Update 1)
    print("F")