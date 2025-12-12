//Find and print the first two maximum elements of the array.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array: \n");
	for(int i = 0;i < n;i++)
	{
		printf("arr[%d] =  ",i);
	    scanf("%d",&arr[i]);
	}
	printf("Elements of the array are: ");
	for(int i = 0;i < n;i++)
	{
		printf(" %d ",arr[i]);
	}
	
	int max = arr[0];
	int secmax;
	for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            secmax = max;   // previous max becomes second max
            max = arr[i];   // update max
        }
        else if(arr[i] > secmax && arr[i] < max) {
            secmax = arr[i];  // update second max
        }
    }
	printf("\nMaximum element is : %d ",max);
	printf("\nSecond maximum element is: %d",secmax);
}