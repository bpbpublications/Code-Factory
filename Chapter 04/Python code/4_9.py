max_no=0
n=int(input("Enter n:"))
for i in range(1, n+1):
    x=int(input("Enter x:"))
    if (x > max_no):
        max_no = x
print("The maximum number is ", max_no)	
