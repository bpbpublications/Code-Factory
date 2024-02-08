class_held = int(input("Total number of classes held "))
class_att= int(input("Total number of classes attended "))
medical_case = input("if there is some medical case enter y ")

Percent_att = (class_att / class_held)  *100
if Percent_att>=80 :
    print("Not Debarred")
elif medical_case== 'y':
    print("Not Debarred")
else:
    print("Debarred")
print("Attendance is ", round(Percent_att,2), "%")

