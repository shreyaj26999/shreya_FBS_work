//Print alternate elements in array.

#include<stdio.h>
void alternate(int*,int);
void main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements of array: \n");
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] =  ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Original array: \n");
	printf("Elements in array are: \n");
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("Alternate elements: ");
	alternate(arr,size);
}
void alternate(int* arr,int size)
{
	for(int i = 0;i < size;i+=2)
	{
		printf(" %d ",arr[i]);
	}
}