//Write a menu driven program to take a number for user and perform operations as follows.

//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.

void main()
{
	int num;
	int choice;
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("Enter the number to check whether it is even or odd: ");
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			printf("The number is even.");
		}
		else
		{
			printf("The number is odd.");
		}
	}
	
	else if(choice == 2)
	{
		printf("Enter the number to check if it is prime or not: ");
		scanf("%d",&num);
		int isPrime = 1;
		if(num <= 1)
		{
			int isPrime = 0;
		}
		else
		{
			for(int i = 2; i <= num/2;i++)
			{
				if(num % 1 == 0)
				{
					int isPrime = 0;
				}
			}
		}
		
		if(isPrime == 1)
		{
			printf("%d is Prime number.\n",num);
		}
		else
		{
			printf("%d is not a Prime number.\n",num);
		}
		
	}
	
	else if(choice == 3)
	{
		printf("Enter the number to check if it is pallindrome or not: ");
		scanf("%d",&num);
		int temp,digit,reversed=0;
		
		for (int i = 1;i <= num/2;i++)
		{
			int num = temp;
			digit = temp % 10; //123%10 = 3,12%10=2,1
			reversed = reversed * 10 + digit; // 0*10+3=3,3*10+2=32
			temp = temp / 10; //123/10=12,12/10=1
		}
		
		if(reversed == num)
		{
			printf("%d is a palindrome.",num);
		}
		else
		{
			printf("%d is not a palindrome.",num);
		}
	
	}
	
	else if(choice == 4)
	{
		printf("Enter the number to check if it's positive,negative or zero: ");
		scanf("%d",&num);
		if(num > 0)
		{
			printf("%d is positive number.\n",num);
		}
		else if(num < 0)
		{
			printf("%d is negative number.\n",num);
		}
		else if(num == 0)
		{
			printf("%d is zero.\n",num);
		}
	}
	
	else if(choice == 5)
	{
		printf("Enter the number to reverse it: ");
		scanf("%d",&num);
		int rev = 0,reminder;
		
		while(num != 0)
		{
			reminder = num % 10;
			rev = rev * 10 + reminder;
			num = num / 10;
		}
		printf("Reversed number: %d",rev);
	}
	
	else if(choice == 6)
	{
		printf("Enter the number to find the sum of digits of number: ");
		scanf("%d",&num);
		int sum = 0,reminder;
		
		while(num != 0)
		{
			reminder = num % 10;
			sum = sum + reminder;
			num = num / 10;
		}
		
		printf("Sum of the digits: %d",sum);
		
	}
}