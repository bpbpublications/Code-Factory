n=int(input("Enter n: "))
x=1
y=1
print(x, end=" ")
print(y, end=" ")
for i in range(3, n+1):
    z=x+y
    print(z, end=" ")
    x=y
    y=z


