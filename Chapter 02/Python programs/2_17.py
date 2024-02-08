quantity=int(input("Enter no of products you purchased "))
amt=quantity * 120
if amt>5000:
    x= amt-0.5*amt
    print("Pls pay ", x)
elif amt>  1000:
    x= amt-0.2*amt
    print("Pls pay ", x)
else:
    print("Pls pay ", amt)
