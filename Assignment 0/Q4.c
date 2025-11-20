//Swapping between two numbers using a temporary third variable.

void main()
{
	int a = 3;
	int b = 4;
	int temp;
	
	printf("Before swapping:\n");
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\n After swapping:\n");
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	
}