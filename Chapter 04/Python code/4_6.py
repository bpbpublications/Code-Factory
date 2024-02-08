sumE=0
sumO=0
n=50
for i in range(1,n+1):
    if(i%2==0):
        sumE = sumE + i
    else:
        sumO = sumO + i

print("Difference is ",sumE-sumO)

