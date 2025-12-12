//accept array and print all prime numbers.

#include <stdio.h>

void main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements of array are: ");
    for(int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    printf("Prime numbers in the array: ");
    for(int i = 0; i < size; i++)
    {
        int num = arr[i];
        int isPrime = 1; // assume number is prime

        if(num <= 1) // 0 and 1 are not prime
        {
            isPrime = 0;
        }
        else
        {
            for(int j = 2; j * j <= num; j++) // check divisibility up to sqrt(num)
            {
                if(num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime)
        {
            printf(" %d", num);
        }
    }
    printf("\n");
}
