
n=int(input("Enter 1st number: "))
m=int(input("Enter 2nd number: "))
lcm=1
for i in range(min(n,m),1, -1):
    if n>=i and m >=i:
        if n%i ==0 and m%i == 0:
            n=n/i
            m=m/i
            lcm=lcm*i
    else:
        break
if n!=0:
    lcm = lcm*n
if m!=0:
    lcm = lcm*m
print(lcm)

