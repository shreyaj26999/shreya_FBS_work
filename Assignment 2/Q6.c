//Accept a number and check if it is divisible by 3, 5, or both.

void main()
{
	int num = 625;
	
	if(num % 3 == 0 && num % 5 == 0)
	{
		printf("The number is divisible by both 3 and 5.\n");
	}
	else if(num % 3 == 0 && !(num % 5 == 0))
	{
		printf("The number is divisible by 3 but not by 5.\n");
	}
	else if(num % 5 == 0 && !(num % 3 == 0))
	{
		printf("The number is divisible by 5 but not by 3.\n");
	}
	else if(num % 3 == 0)
	{
		printf("The number is divisible by 3.\n");
	}
	else if(num % 5 == 0)
	{
		printf("The number is divisible by 5.\n");
	}
	else
	{
		printf("The number is not divisible by both.\n");
	}
}