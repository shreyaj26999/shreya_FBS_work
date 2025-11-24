//Check if the number is Perfect number or not.
//Perfect number is a number where number is equals to addition of its all proper divisors(excluding the num itself.)

void main()
{
	int num = 28, i = 1 , sum = 0;
	
	while(i < num)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	
	if(sum == num)
	{
		printf("The number is a perfect number.\n");
	}
	else
	{
		printf("The number is not a perfect number.\n");
	}
}