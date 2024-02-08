
L2 = [45,31,17,33,97,118]
L1 = []

for n in L2:
    is_prime = True    
    for i in range(2, n):
        if n % i == 0:
            is_prime = False
            break
            
    if is_prime == True:
        L1.append(n)

print("L1:", L1)

