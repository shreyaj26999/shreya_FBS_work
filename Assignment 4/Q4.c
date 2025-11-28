//Print strong numbers in the given range 1 to n.

void main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    // Loop through every number from 1 to n
    for (int num = 1; num <= n; num++) {

        int temp = num;   // Store the original number for processing
        int sum = 0;      // To store the sum of factorials of digits

        // Extract each digit and compute factorial manually
        while (temp != 0) {

            int digit = temp % 10;   // Get the last digit
            int fact = 1;            // Variable to store factorial of the digit

            // Calculate factorial of the digit using a loop
            for (int i = 1; i <= digit; i++) {
                fact *= i;           // Multiply to get factorial
            }

            sum += fact;             // Add factorial to sum
            temp /= 10;              // Remove last digit
        }

        // Check if the number equals the sum of factorials of its digits
        if (sum == num) {
            printf("%d ", num);      // Print if it is a Strong number
        }
    }

}
