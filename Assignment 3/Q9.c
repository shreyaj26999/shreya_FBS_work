//Check whether a number is strong or not.
//num which is equal to sum of factorial of all the digits in number.
void main()
{
	int num = 128;
	int temp = num;
	int sum = 0, digit;
	
	while(temp > 0)
	{
		digit = temp % 10; //extract last digit from the number
	}
	
	int i = 1, fact = 1;
	while(i <= digit)
	{
		fact = fact * i;
		i++;
	}
	
	sum = sum + fact;
	temp = temp / 10;
	
	if(sum == num)
	{
		printf("%d is a strong number.",num);
	}
	else
	{
		printf("%d is not a string number.",num);
	}
	
}