void main()
{
	int year = 1998;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("The year is leap year");
	}
	else
	{
		printf("The year is not a leap year");
	}
}