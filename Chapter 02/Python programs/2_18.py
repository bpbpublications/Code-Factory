price1=int(input("enter price of book 1 "))
price2=int(input("enter price of book 2 "))
price3=int(input("enter price of book 3 "))

if (price1 <  price2 and price1< price3):
    amt_paid = price2 + price3
elif (price2 < price1 and price2< price3):
    amt_paid = price1 + price3
else:
    amt_paid = price2 + price1
print("Pls pay",amt_paid)
