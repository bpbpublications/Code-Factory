void main()
{
float price1, price2, price3;
float amt_paid;
printf("Enter price of 3 books: ");
scanf("%f%f%f",&price1, &price2, &price3);
if ((price1 <  price2) && (price1< price3))
{amt_paid = price2 + price3; }
else if ((price2 < price1) && (price2 < price3))
{amt_paid = price1 + price3; }
else
{amt_paid = price2 + price1; }
printf("Pls pay Rs. %f",amt_paid);
}

