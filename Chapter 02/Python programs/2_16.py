sal=int(input("Enter your basic salary "))
if sal <= 10000 :
    HRA = 0.2 * sal
    DA = 0.8*sal
elif sal <= 20000 :
    HRA = 0.25*sal
    DA =0.9*sal
else:
    HRA = 0.3*sal
    DA =0.95*sal
print("Gross Salary is ", sal+HRA+DA)
