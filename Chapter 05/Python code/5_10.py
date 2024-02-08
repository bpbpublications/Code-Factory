a=[[1,1,1],[10,11,12],[0,0,1]]

flag=0
for i in range(0, 3):
    for j in range(0, i):
        if a[i][j]!=0:
            flag=1
            break

print("Matrix is ", a)
if flag==0:
    print("Matrix is upper triangular ")
else:
    print("Matrix is not upper triangular ")
