bina = 0
i = 1
nn=int(input("Enter the decimal number: "))
bb=int(input("Enter the required base: "))

if bb<2 or bb > 9:
    print("Base should be between 2 to 9")
    exit(0)
    
while nn != 0 : 
    re = nn % bb
    nn = nn//bb
    bina += re * i
    i *= 10
  
print("The base ", bb, " representation of ", nn, " is ", bina)
