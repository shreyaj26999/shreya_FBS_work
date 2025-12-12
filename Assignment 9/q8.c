//Merge two arrays.
#include <stdio.h>
void mergeArrays(int*,int,int*,int);
int main() {
    int a[50], b[50];
    int n1, n2;

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    // Input first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    // Input second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
	// Call merge function
    mergeArrays(a, n1, b, n2);
}
void mergeArrays(int* a, int n1, int* b, int n2) 
{
    int result[100];
    int i, j;
	// Copy first array
    for (i = 0; i < n1; i++) {
        result[i] = a[i];
    }
	// Copy second array
    for (j = 0; j < n2; j++) {
        result[i + j] = b[j];
    }
	// Print merged array
    printf("\nMerged Array:\n");
    for (int k = 0; k < n1 + n2; k++) {
        printf("%d ", result[k]);
    }
}
