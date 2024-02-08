n = int(input("Enter the number of terms: "))

sum = 0
f=1

for i in range(1, n+1):
    if i == 1:
        sum += 1/2
    else:
        f = f*(i+1)
        sum += i/f

print("Sum of the series is:", sum)
