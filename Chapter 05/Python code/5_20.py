n= int(input("Enter a number"))
for i in range(1,n+1): 
    for k in range(1, i):
	    print(" ", end=" ")
    for j in range(1, n-i+2):
	    print(n-i+1, end=" ")
    for l in range(1, n-i+1):
	    print(n-i+1, end=" ")
    print("\n")

