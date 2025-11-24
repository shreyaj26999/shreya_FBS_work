//Factorial of the number.

void main()
{
	int num = 5,i = 1,fact = 1;
	
	while(i <= num)
	{
		fact = fact * i;
		i++;
	}
	
	printf("The factorial of the number is: %d",fact);
	
}