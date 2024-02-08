#read marks in five subjects as inputs from the user

s1=int(input(" Enter marks in first subject "))
s2=int(input("Enter marks in 2nd subject "))
s3=int(input("Enter marks in 3rd subject "))
s4=int(input("Enter marks in 4th subject "))
s5=int(input("Enter marks in 5th subject "))

#find percentage marks
a = (s1+s2+s3+s4+s5)*100/500

#print the output on the screen
print ("Percentage =", a)
