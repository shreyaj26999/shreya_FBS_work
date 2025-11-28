//WAP to calculate the electricity bill where for 1-50 units:30rs/unit,for 51-150 units:40 rs/unit and for 151 and above units- 50 rs/unit.

void main()
{
	int units,bill;
	printf("Enter the units: ");
	scanf("%d",&units);
	
	if(units >= 1 && units <= 50)
	{
		bill = 30 * units;
		printf("The total bill is: %d",bill);
	}
	else if(units >= 51 && units <= 150)
	{
		bill = units * 40;
		printf("The total bill is: %d",bill);
	}
	else if(units >= 151)
	{
		bill = units * 50;
		printf("The total bill is: %d",bill);
	}
}