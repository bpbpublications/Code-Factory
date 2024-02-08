x1=int(input("Enter first side of triangle: "))
x2=int(input("Enter second side of triangle: "))
x3=int(input("Enter third side of triangle: "))
if((x1+x2) > x3  and (x1+x3) > x2  and (x2+x3) > x1):
    print ("It is a valid triangle")
else:
    print ("It is not a valid triangle")
