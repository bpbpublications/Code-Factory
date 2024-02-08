'''
An almirah can have m number of bags and each bag can hold
n number of books. Take the capacity of almirah and bag (m and n)
as input from the user. Also take input the number of books user
have (in variable a). Then calculate the number of bags and almirahs
required to store a books.

For example: Capacity of almirah = 5 bags
Capacity of bag = 10 books
Number of books user have: 79
Output: Number of bags required = 8
Number of almirahs required = 2

'''

import math

cap_al= int(input("Enter the capacity of the almirah: "))
cap_bag= int(input("Enter the capacity of the bag: "))
book= int(input("Enter the number of books user have: "))
n_bag=math.ceil(book/cap_bag)
n_al=math.ceil(n_bag/cap_al)

print(n_bag, " bags and ", n_al, " almirah are required.")
