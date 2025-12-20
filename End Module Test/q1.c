//Sum of prime numbers in a given range.

#include <stdio.h>

void main() {
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("Sum of prime numbers between %d and %d is: %d\n", start, end, sum);
}
void isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
