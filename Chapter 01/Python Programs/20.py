import math

#read cordinates (x, y) as input from the user
x1=int(input("Enter x-point 1 "))
y1=int(input("Enter y-point 1 "))
x2=int(input("Enter x-point 2 "))
y2=int(input("Enter y-point 2 "))
#obtain Manhattan distance
man_dis = abs(x1-x2) + abs (y1-y2)
#obtain Euclidean distance
eucl_dis = math.sqrt((x1-x2)* (x1-x2) + (y1-y2)* (y1-y2))
#print the output on the screen
print("Manhattan distance is ",man_dis)
print("Euclidean distance is ", eucl_dis)
