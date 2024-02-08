import math
for m in range(0,1000):
    s=0 
    n=m
    a=[]
    i=0
    j=0
    ar=0
    while(n>0): 
        rem=n%10
        a.append(rem )
        n=n//10 
        i=i+1

    while (j<i):
        ar=ar+pow(a[j],i)
        j=j+1

    if ar == m:
       print(m)
    del a
