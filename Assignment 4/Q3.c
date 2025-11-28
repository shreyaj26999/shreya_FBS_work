//Print perfect numbers in the given range 1 to n.

void main() {
    int n;

    // Ask the user to enter the upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    // Loop through every number from 1 to n
    for (int num = 1; num <= n; num++) {

        int sum = 0;  // To store the sum of proper divisors

        // Find divisors of 'num' from 1 to num/2
        // A number cannot have a proper divisor greater than num/2
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) { // If 'i' divides 'num'
                sum += i;      // Add divisor to sum
            }
        }

        // Check if the sum of divisors equals the number
        if (sum == num) {
            printf("%d ", num);   // Print perfect number
        }
    }
    
}
