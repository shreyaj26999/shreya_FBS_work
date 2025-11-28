//check if the number is positive,negative and neutral.

void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	if(num > 0)
	{
		printf("The number is positive.");
	}
	else if(num < 0)
	{
		printf("The number is negative.");
	}
	else
	{
		printf("The number is neutral.");
	}
}