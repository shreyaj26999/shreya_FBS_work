//Take two array and add sum in the third array.
//ex:arr[5]={1,2,3,4,5}.brr[5]={10,20,30,40,50},crr[5]={11,22,33,44,55}.

#include <stdio.h>

void addArrays(int* arr1, int* arr2, int* arr3, int size);

int main()
{
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr[size], brr[size], crr[size];

    // Input first array
    printf("Enter elements of first array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("brr[%d] = ", i);
        scanf("%d", &brr[i]);
    }

    // Call function to add arrays
    addArrays(arr, brr, crr, size);

    // Print the third array
    printf("Sum of the arrays (third array) is:\n");
    for(int i = 0; i < size; i++)
    {
        printf("crr[%d] = %d\n", i, crr[i]);
    }

    return 0;
}

// Function to add two arrays
void addArrays(int* arr1, int* arr2, int* arr3, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}
