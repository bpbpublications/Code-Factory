'''
Take the amount from user and
print minimum number of notes required
for the amount. Let the denominations
are 500, 100, 50, 20, 10, 5, 2, 1. 
For example:  Input amount: 576
Output Total number of notes:
500: 1 , 100: 0 , 50: 1, 20: 1, 10: 0, 5: 1, 2: 0, 1: 1
'''

deno=[500, 100, 50, 20, 10, 5, 2, 1]

a_m=int(input("Enter the amount: "))

d_freq=[]

s=a_m
for i in range(0, len(deno)):
    d_freq.append(s//deno[i])
    s=s%deno[i]
    
for i in range(0, len(deno)):
    print(deno[i], ":", d_freq[i], end=", ")
    
