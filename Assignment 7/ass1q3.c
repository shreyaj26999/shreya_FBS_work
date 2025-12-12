//check if year is a leap year or not.
void leapyear(int *);
void main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	leapyear(&year);
}
void leapyear(int *x)
{
	if(*x % 4 == 0 && *x % 100 != 0 || *x % 400 == 0)
	{
		printf("The year is leap year");
	}
	else
	{
		printf("The year is not a leap year");
	}
}