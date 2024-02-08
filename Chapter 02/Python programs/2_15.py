a=int(input("Enter marks in subject 1: "))
b=int(input("Enter marks in subject 2: "))
c=int(input("Enter marks in subject 3: "))
d=int(input("Enter marks in subject 4: "))
e=int(input("Enter marks in subject 5: "))

p=((a+b+c+d+e)/500)*100
if  p >=90:
    print("Grade is A")
elif  p >=80:
    print("Grade is B")
elif  p >=60:
    print("Grade is C")
elif  p >=40:
    print("Grade is D")
else:
    print("Grade is F")
