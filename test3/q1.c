//Write a program to print even and odd numbers in a given range.start = 10,end = 25.

void main()
{
	printf("Even numbers: \n");
	for(int i = 10; i <= 25;i++)
	{
		if(i % 2 == 0)
		{
			printf("%d",i);
		}
		else
		{
			printf(" ",i);
		}
	}
}