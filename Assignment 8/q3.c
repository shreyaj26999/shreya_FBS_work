//Sum of the elements of array.

void main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements of array: ");
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nElements of array are: ");
	for(int i = 0;i < size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	
	int sum = 0;
	for(int i = 0;i < size;i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of elements of array: %d",sum);
}