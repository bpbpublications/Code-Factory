n=int(input("Enter a number:")) 
s=0 
while(n>0):
        rem=n%10
        s=s+rem
        n=n//10 
print("The total sum of digits is: ",s)
