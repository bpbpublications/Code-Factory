
matrix = [[0 for j in range(3)] for i in range(3)]

for i in range(3):
    for j in range(3):
        matrix[i][j] = int(input("Enter element at position ({,i,},{,j, }): "))

print("The matrix is:")
for i in range(3):
    for j in range(3):
        print(matrix[i][j], end=" ")
    print()

