n=int(input("Enter a number "))
i=1
s=0
while(i<=n):
    s = s + i
    i=i+1
print("The sum is ",s)
if(s%2==0):
    print("EVEN");
else:
    print("ODD");
