//WAP to check whether a number is positive or negative.
void checknum(int *);
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	checknum(&num);
}
void checknum(int *x)
{
	if(*x > 0)
	{
		printf("The number is positive.");
	}
	else
	{
		printf("The number is negative.");
	}
}