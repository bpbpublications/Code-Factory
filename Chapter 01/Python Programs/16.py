#read float type input from the user
i=float(input("Enter height in inches "))
#convert inch to feet-inch
f=i//12
inch = i%12
#print the output on the screen
print("Your height is ", f, " feet", inch, "in")

