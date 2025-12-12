//Merging of two arrays.
#include <stdio.h>

int main() {
    int a[50], b[50], result[100];
    int n1, n2, i, j;
    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    // Input elements of first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge first array
    for (i = 0; i < n1; i++) {
        result[i] = a[i];
    }
    // Merge second array
    for (j = 0; j < n2; j++) {
        result[i + j] = b[j];
    }
    // Print merged array
    printf("\nMerged Array:\n");
    for (int k = 0; k < n1 + n2; k++) {
        printf("%d ", result[k]);
    }
}
