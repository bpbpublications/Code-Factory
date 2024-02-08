#a=[[1,1,1],[1,1,1],[1,1,1]]
a=[[1, 2, 3], [2, 3, 4], [3, 4, 6]]

c=[]
for i in range(0, len(a[0])):
    t=[]
    for j in range(0, len(a)):
        t.append(a[j][i])
    c.append(t)
    del t
print("Original Matrix",a)
print("Transposed Matrix",c)

if a==c:
    print("Symmetric")
else:
    print("not Symmetric")
