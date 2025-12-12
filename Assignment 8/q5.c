//Print alternate numbers.

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
	printf("Alternate elements: ");
	for(int i = 0;i < size;i += 2)
	{
		printf(" %d ",arr[i]);
	}
}