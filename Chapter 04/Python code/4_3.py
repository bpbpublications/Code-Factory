n=int(input("Enter n: "))
c=0
for i in range(1, n+1):
    x=int(input("Enter x:"))
    if(x%2 == 0):
        c=c+1

print("There are ", c , " even numbers")	
