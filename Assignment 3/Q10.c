//Check whether the number is palindrome or not.

void main()
{
	int num = 121;
	int temp = num;
	int reversed = 0,digit;
	
	while(temp > 0)
	{
		digit = temp % 10;//gives reminder 1,gives reminder 2,gives reminder 1
		reversed = reversed * 10 + digit;//0 * 10 + 1 = 1, 1 * 10 + 2 = 12, 12 * 10 + 1 = 121
		temp = temp / 10;//121/ 10 = 12, 12/10 = 1
	}
	
	if(reversed == num)
	{
		printf("%d is a palindrome.",num);
	}
	else
	{
		printf("%d is not a palindrome.",num);
	}
}