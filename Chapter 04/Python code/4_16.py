
n=int(input("Enter the size of list: "))
a=[]
f=[]
for i in range(0,n):
    x=int(input("Enter the number: "))
    a.append(x)
    f.append(-1)
for i in range(0, n):
    count=0
    if f[i] == 1:
        continue
    for j in range(0,n):
        if a[i]==a[j]:
            f[j]=1
            count=count+1
    print("Freqency of ", a[i] , " is ", count)


