n=int(input("Enter n: "))
x=int(input("Enter x: "))
p=1
for i in range(1,n+1):
    p=p*x
print(x,"^",n," = ",p)
