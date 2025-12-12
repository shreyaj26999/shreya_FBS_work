//Sum of all the elements of array.

#include<stdio.h>
void sum(int*, int);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
	int arr[size];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array elements are: ");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d ", i, arr[i]);
    }

    printf("\n");
    sum(arr, size);
}

void sum(int* arr, int size)
{
    int sum = 0; 
    for(int i = 0; i < size; i++)
    {
        sum += arr[i]; 
    }
	printf("Sum of the elements in the array: %d\n", sum);
}
