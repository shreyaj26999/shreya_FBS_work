//Print armstrong numbers in the given range 1 to n.

void main()
{
	int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (int num = 1; num <= n; num++) {
        int temp = num;
        int digits = 0;

        // Count number of digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        int sum = 0;

        // Calculate sum of digits raised to the power 'digits'
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check Armstrong condition
        if (sum == num) {
            printf("%d\n", num);
        }
    }

}