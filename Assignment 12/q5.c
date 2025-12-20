//WAP to count the number of vowels in a string.
#include<stdio.h>
void main()
{
	char str[50];
	int count = 0;
	
	printf("Enter the string: ");
	scanf("%s",str);
	
	for(int i = 0;str[i] != '\0';i++)
	{
		char ch = str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			count++;
		}
	}
	printf("The string has %d vowels.",count);
}