//Sort the array

#include<stdio.h>
void storeData(int*,int);
void displayData(int*,int);
void sortingAsc(int*,int);
void main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int arr[size];
	storeData(arr,size);
	printf("\nBefore sorting: ");
	displayData(arr,size);
	sortingAsc(arr,size);
	printf("\nAfter sorting: ");
	displayData(arr,size);
}
void storeData(int* arr,int size)
{
	int i;
	printf("Enter %d elements: \n",size);
	for(int i = 0;i < size;i++)
	{
		printf("arr[%d] =  ",i);
		scanf("%d",&arr[i]);
	}
}
void displayData(int* arr,int size)
{
	int i;
	printf("\nArray elements are: ");
	for(int i = 0;i < size;i++)
	{
		printf("\t%d",arr[i]);
	}
}
void sortingAsc(int* arr,int size)
{
	int i,j;
	for(int i = 0;i < size;i++)
	{
		for(int j = 0;j < size;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}