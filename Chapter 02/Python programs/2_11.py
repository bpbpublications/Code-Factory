a=int(input("Enter side 1 of a triangle "))
b=int(input("Enter side 1 of a triangle "))
c=int(input("Enter side 1 of a triangle "))
if a==b and b==c:
    print("It is an equilateral triangle")
elif a==b or b==c or c==a :
    print("It is an isosceles triangle")
else:
    print("It is a scalene triangle")
