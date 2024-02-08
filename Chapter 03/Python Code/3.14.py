n=int(input("Enter n: "))

s=0
t=9
for i in range(1, n+1):
    s=s+t
    t=t*10+9

print(s)

