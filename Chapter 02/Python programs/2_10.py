no_my_toffee = int(input("Enter number of your toffees "))
no_sis_choco = int(input("Enter number of sister's chocolates "))
my_rs = 2 *no_my_toffee
sis_rs = 10 * no_sis_choco
if my_rs>sis_rs:
    print("I spent more money")
elif my_rs==sis_rs:
    print("We spent equal money")
else:
    print("She spent more money")
