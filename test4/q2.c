//write a program to find power of any number.e.g.2^4=16.

void main()
{
	int base,exponent;
	int power = 1;
	printf("Enter the value of base: ");
	scanf("%d",&base);
	printf("Enter the value of exponent: ");
	scanf("%d",&exponent);
	for(int i = 1;i <= exponent; i++)
	{
		power = power * base;
	}
	printf("%d raised ro the power %d is %d\n",base,exponent,power);
}