A=[[1,1,2,2],[1,1,1,1],[3,3,3,3]]
B=[[9,9,8,8],[2,2,2,2],[4,4,8,6]]

if len(A) != len(B) or len(A[0])!=len(B[0]):
    print("matrices are not of same size")
    exit()
rows = len(A)
cols = len(A[0])
C = [[0 for j in range(cols)] for i in range(rows)]

for i in range(rows):
    for j in range(cols):
        C[i][j] = A[i][j] + B[i][j]

print("Matrix C (sum of A and B):")
for i in range(rows):
    for j in range(cols):
        print(C[i][j], end=' ')
    print()

