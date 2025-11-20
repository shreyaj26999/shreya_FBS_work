//Check whether a given character is upperacse or lowercase.

void main()
{
	char ch = 'A';
	if(ch >= 'A' && ch <='Z')
	{
		printf("The character is Uppercase.");
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("The character is Lowercase.");
	}
	else
	{
		printf("The character is not alphabet.");
	}
}