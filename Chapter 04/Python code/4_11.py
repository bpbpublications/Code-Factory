n=int(input("Enter a number: "))
if n==1:
    print("it is neither prime or composite")
    exit(1)
flag =0
for i in range(2,n-1):
    if(n%i==0):
        flag =1
        break
if flag==0:
    print(n, "is a prime number")
else:
    print(n, "is not a prime number")
