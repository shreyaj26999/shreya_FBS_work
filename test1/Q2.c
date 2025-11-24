//WAP to check is it is leap year or not.

void main()
{
	int year = 2006;
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("The year is Leap year.\n");
	}
	else
	{
		printf("The year is not leap year.\n");
	}
}