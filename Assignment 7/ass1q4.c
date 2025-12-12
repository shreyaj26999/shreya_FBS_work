//Check whether a given character is a vowel or consonent.
void checkchar(char *);
void main()
{
	char c;
	printf("Enter the character: ");
	scanf("%d",&c);
	checkchar(&c);
}
void checkchar(char *check)
{
	if(*check == 'a' || *check == 'e' || *check == 'i' || *check == 'o' || *check == 'u' )
	{
		printf("IT IS A VOWEL.");
	}
	else
	{
		printf("IT IS A CONSONENT.");
	}
}