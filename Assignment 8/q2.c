//Search the given number in the array.
void main()
{
	int size,key;
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
	printf("Enter the number to be searched: ");
	scanf("%d",&key);
	for(int i = 0;i < size;i++)
	{
		if(key == arr[i])
		{
			printf("The element %d is present in the array.",key);
		}
	}
}