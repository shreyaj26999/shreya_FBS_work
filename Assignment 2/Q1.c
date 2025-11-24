//Accept two integers and perform addition,substractio,multiplication,division.

void main()
{
	int num1 = 20, num2 = 30;
	char op = '*';
	
	if(op == '+')
	{
		printf("The addition of num1 and num2 is : %d\n",num1 + num2);
	}
	else if(op == '-')
	{
		printf("The substraction of num1 and num2 is : %d\n",num1 - num2);
	}
	else if(op == '*')
	{
		printf("The multiplication of num1 and num2 is : %d\n",num1 * num2);
	}
	else if(op == '/')
	{
		if(num2 == 0){
			printf("Error,op cannot be performed if num2 is zero.");
		}
		else
		{
			printf("The result is %d\n",num1 / num2);
		}
	}
	else if(op == '%')
	{
		if(num2 == 0){
			printf("Error,op cannot be performed if num2 is zero.");
		}
		else
		{
			printf("The result is %d\n",num1 % num2);
		}
	}
}