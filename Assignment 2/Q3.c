//Write a program to find greatest of three numbers using nested if-else.

void main()
{
	int num1 = 10, num2 = 20, num3 = 5;
	
	if(num1 > num2 && num1 > num3)
	{
		printf("num1 is greater than num2 and num3.");
	}
	else
	{
		if(num2 > num1 && num2 > num3)
		{
			printf("num2 is greater than num1 and num3.");
		}
		else
		{
			printf("num3 is greater.");
		}
	}
}