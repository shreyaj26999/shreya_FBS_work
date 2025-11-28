//Print prime numbers in the given range 1 to n.

void main()
{
	int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    // Loop through numbers from 2 to n (1 is not a prime)
    for (int num = 2; num <= n; num++) {
        int isPrime = 1; // Assume the number is prime

        // Check divisibility from 2 to num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) { // If divisible, not prime
                isPrime = 0;
                break;
            }
        }

        // If still prime, print it
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }
}