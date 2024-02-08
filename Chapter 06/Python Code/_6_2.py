l=int(input("Enter the number of legs:"))
f= input("Enter if it has feather:")
if l == 2:
    if f == 'y':
        print("Bird")
    else:
        print("Human")
elif l == 4:
    if f == 'n':
        print("Animal")
    else:
        print("No such creature exists.")
else:
	print("No such creature exists.")
