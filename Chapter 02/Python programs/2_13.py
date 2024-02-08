a=int(input("Enter first number"))
b=int(input("Enter first number"))
c=int(input("Enter first number")) 
if a>b:
    if b>c:
        print("a is largest")
    elif a>c:
        print("a is largest")
    else:
        print("c is largest")
else:
    if a>c:
        print("b is largest")
    elif b>c:
        print("b is largest")
    else:
        print("c is largest")
