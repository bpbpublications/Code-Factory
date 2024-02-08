'''
Calculate and print the bill for a hotel that provides hourly services
of two types: regular and premium.

The rates for the regular services are:
base rate : $50 (applicable for 2 hrs). After that $30 for every hour.
Rate of private pool for 1 hr is $70. 

The rates for the premium services are: base rate: $100
(applicable for 3 hrs). After that $50 for every hour.
5% discount on booking of private pool if booked for 2 hrs or more. 

Ask the user the enter the inputs as : type of service
(r – regular, p – premium), Booking duration,
Private pool required?.  Generate the bill for the customer. 
'''
ser=input("Enter the type of service (r – regular, p – premium): ")
dur=int(input("Enter the booking duration (in hrs): "))
pool=input("Private pool required?(y/n): ")

if ser == 'r':
    rate_reg=50
    if dur > 2:
        rate_reg = rate_reg+ (dur-2)*30
    if pool=='y':
        dur_pool=int(input("Enter duration of pool (in hrs): "))
        rate_reg = rate_reg+ dur_pool*70
    print("The bill amount is ", rate_reg)
    

elif ser == 'p':
    rate_p=100
    if dur > 3:
        rate_p = rate_p+ (dur-3)*50
    if pool=='y':
        dur_pool=int(input("Enter duration of pool (in hrs): "))
        if dur_pool <2:
            rate_p = rate_p+ dur_pool*70
        else:
            rate_p = rate_p+ dur_pool*70*0.95
    print("The bill amount is ", rate_p)

else:
    print("Wrong service selected")
