//Accept array and print only prime numbers in the array.
#include <stdio.h>

int isPrime(int n);
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
    
    printf("\nPrime numbers in the array are: ");
    for(int i = 0; i < size; i++)
    {
        if(isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}
int isPrime(int n)
{
    if(n <= 1)
        return 0;      
	for(int i = 2; i * i <= n; i++)
    {
	    if(n % i == 0)
        return 0;  
    }
	return 1;          
}
