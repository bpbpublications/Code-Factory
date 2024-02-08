'''
Take marks of n students an input from user.
Obtain a subset of m students in a way that minimizes
the difference between the highest and lowest scorers in that subset.
For Example:
Let marks[] = {50, 70, 10, 90, 20, 100, 30} and m = 3
Output :
Subset is {10, 20, 30}.
Difference is 20

'''
st_l=[]
nn=int(input("Enter the number of students: "))

for ii in range(0, nn):
    st_l.append(int(input("Marks: ")))

mm=int(input("Enter the group size: "))


for jj in range(0,nn-1):
    for ii in range(0, nn-jj-1):
        if st_l[ii] > st_l[ii+1]:
            st_l[ii],st_l[ii+1]=st_l[ii+1],st_l[ii]

diff=[]
min_no=max(st_l)
ind=nn
for jj in range(0,nn-mm):
    diff.append(st_l[jj+mm-1]-st_l[jj])
    if diff[jj] < min_no:
        min_no=diff[jj]
        ind=jj

print("Subset is ", st_l[ind: ind+mm])
    
