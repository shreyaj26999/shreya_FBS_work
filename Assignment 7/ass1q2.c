//3 digit number is palindrome or not.
void palindrome(int *);
void main()
{
	int x;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	palindrome(&x);
}
void palindrome(int *num)
{
	int first, middle, last;
	first = *num / 100;        // First digit
    middle = (*num / 10) % 10; // Middle digit
    last = *num % 10;          // Last digit

    // Check palindrome
    if (first == last)
        printf("%d is a palindrome.\n", *num);
    else
        printf("%d is not a palindrome.\n", *num);
}