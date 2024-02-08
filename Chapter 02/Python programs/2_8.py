class_held = int(input("Total number of classes held: "))
class_att= int(input("Total number of classes attended: "))
Percent_att = (class_att / class_held)  *100
if(Percent_att>=80):
    print( "Not Debarred")
else:
    print( "You are debarred")

print("Your attendance is ",round(Percent_att,2), "%")
