x=int(input("Enter first number "))
y= int(input("Enter second number "))
op=input("Enter operator: a for addition, s for subtraction, m for multiplication and d for division ")
if op== 'a':
    print( x+y)
elif op== 's':
    print( x-y)
elif op== 'm':
    print( x*y)
elif op== 'd':
    print( x/y)
else:
    print("Entered invalid operator")
