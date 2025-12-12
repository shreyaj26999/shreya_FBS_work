//Search the given number in the array.
#include <stdio.h>

int search(int*, int, int);

int main()
{
    int size, key;

    printf("Enter no of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements in the array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array elements are: ");
    for(int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }

    printf("\nEnter the number to be searched: ");
    scanf("%d", &key);

    int result = search(arr, size, key);

    if(result == -1)
    {
        printf("Number %d not found in the array.\n", key);
    }
    else
    {
        printf("Number %d found at index %d.\n", key, result);
    }

    return 0;
}

int search(int* arr, int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
