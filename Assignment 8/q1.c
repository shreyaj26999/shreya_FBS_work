//max and min in the array.

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
	int max = arr[0];
	int min = arr[0];
	
	for(int i = 0;i < size;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
   }
   printf("Maximum element = %d\n",max);
   printf("Minimum element = %d",min);
}