#read two integer inputs from the user
n=int(input("Enter first number: "))
m=int(input("Enter second number: "))

#to swap to numbers without temporary variable
#some simple arithmetic is applied

n = n+m
m=n-m
n=n-m

#print the output on the screen
print("Numbers after swapping are ", n, m)
