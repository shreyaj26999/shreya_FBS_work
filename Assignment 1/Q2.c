//3 digit number is palindrome or not.

void main()
{
	int num, first, middle, last;
	num = 327;
	
	first = num / 100;        // First digit
    middle = (num / 10) % 10; // Middle digit
    last = num % 10;          // Last digit

    // Check palindrome
    if (first == last)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
}