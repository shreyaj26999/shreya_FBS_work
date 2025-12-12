//Max and min from the array.
void maxmin(int*,int);
void main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of the array: ");
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] =  ",i);
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] = %d ",size,arr[i]);
	}
	printf("\n");
	maxmin(arr,size);
}
void maxmin(int* arr,int size)
{
	int max = arr[0];
	int min = arr[0];
	
	for(int i = 0;i < size;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			//printf("\nMaximum element of the array: ",arr[i]);
		}
		
		if(arr[i] < min)
		{
			min = arr[i];
			//printf("\nMinimum element of the array: ",arr[i]);
		}
	}
	printf("Maximum element in the array: %d\n",max);
	printf("Minimum element in the array: %d\n",min);
}