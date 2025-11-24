//Find the sum of first and last digit of a number.

void main()
{
	int num = 12345;
	int temp = num;
	int last_digit, first_digit;
	
	last_digit = num % 10;//gives last digit 5
	
	while(temp >= 10)
	{
		temp = temp / 10;//keeps dividing until we get the first digit
	}
	first_digit = temp;
	
	int sum = first_digit + last_digit;
	
	printf("The sum of last two digits of %d is %d",num,sum);
	
}