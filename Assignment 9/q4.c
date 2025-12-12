//Find even and odd numbers among the numbers.

#include<stdio.h>
void evenodd(int*,int);
void main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of the array: ");
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("The elements of the array are: ");
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	evenodd(arr,size);
}
void evenodd(int* arr,int size)
{
	for(int i = 0;i < size;i++)
	{
		if(arr[i] % 2 == 0)
		{
			printf("The element %d is even.",arr[i]);
		}
		else
		{
			printf("The element %d is odd.",arr[i]);
		}
	}
}