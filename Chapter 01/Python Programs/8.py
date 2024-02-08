#read two integer inputs from the user
n=int(input("Enter first number: "))
m=int(input("Enter second number: "))
temp = n #store the value of n in a temporary variable
n=m #copy second variable to first one
m = temp #copy the value of first variable form temporary variable to second variable

#print the output on the screen
print("Numbers after swapping are ", n, m)
