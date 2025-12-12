//take two arrays and add them up to give the third array.

void main()
{
	int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int *arr1 = (int*)malloc(size * sizeof(int));
	int *arr2 = (int*)malloc(size * sizeof(int));
	int *arr3 = (int*)malloc(size * sizeof(int));

    printf("Enter elements of first array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    
    printf("Sum of the arrays (third array) is:\n");
    for(int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    for(int i = 0; i < size; i++)
    {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }
}