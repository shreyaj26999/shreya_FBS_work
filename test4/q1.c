//Write a program to print factors of a number in given range.e.g range 10 to 15

void main()
{
	int start,end;
	printf("Enter start of range: ");
	scanf("%d",&start);
	printf("Enter end of range: ");
	scanf("%d",&end);
	
	for(int num = start;num <= end;num ++)
	{
		printf("\nFactors of %d are: ",num);
		for(int i = 1;i <= num;i++)
		{
			if(num % i == 0)
			{
				printf(" %d ",i);
			}
		}
	}
}