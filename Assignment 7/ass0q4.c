//Swapping between two numbers using a temporary third variable.
void swap(int *,int *);
void main()
{
	/*int a = 3;
	int b = 4;
	int temp;
	
	printf("Before swapping:\n");
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	*/
	int x,y;
	printf("Enter the value of x and y: ");
	scanf("%d %d",&x,&y);
	swap(x,y);
}
void swap(int *a,int *b)
{
	printf("Before swapping:\n");
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	
	int *temp = *a;
	*a = *b;
	*b = *temp;
	
	printf("\n After swapping:\n");
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
}