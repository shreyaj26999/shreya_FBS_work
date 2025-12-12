//add alteranete numbers from given range.e.g. 1 to 5.

void main()
{
	int sum = 0;
	for(int i = 1;i <= 5;i+=2)
	{
		sum = sum + i;
	}
	printf("The sum is: %d",sum);
}