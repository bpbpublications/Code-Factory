n=int(input("Enter the size of the list: "))
print("Enter the elements of the list:\n");
a=[]
flag=0
for i in range(0, n):
    el=int(input("Enter :"))
    a.append(el)

x=int(input("Enter the element to be searched: "))

for i in range(0, n):
    if (a[i] == x):
        flag = 1
        break
if (flag == 1):
    print(a[i]," is present at position ",i+1, " in the list")
else:
    print(a[i]," is not present in the list")

