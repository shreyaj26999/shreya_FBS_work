//Check if the given number is prime.

void main()
{
	int i = 2,num = 7,flag = 1;
	
	while(i <= num/2)//no number can have greater factoer than itself
	{
		if(num % i == 0)
		{
			flag = 0;
			break;
		}
		i++;
	}
	
	if(flag == 1)
	{
		printf("%d is a prime number.",num);
	}
	else
	{
		printf("%d is not a prime number.",num);
	}
}