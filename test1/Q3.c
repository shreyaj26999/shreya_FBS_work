//Print last two digits of number.e.g.1234 and output should be 34.

void main()
{
	int num = 6752;
	int op;
	
	op = num % 100;
	printf("The last two digits of the number are: %d",op);
}