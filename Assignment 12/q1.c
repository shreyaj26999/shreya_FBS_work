//WAP to scan string from the user then scan a single character and search it in a accepted string.
#include<stdio.h>
#include<string.h>
void main()
{
	char string[100],ch;
	int flag = 0;
	
	printf("Enter the string: ");
	scanf("%s",string);
	
	printf("Enter the character to search: ");
	scanf(" %c",&ch);
	
	for(int i = 0;string[i] != '\0';i++)
	{
		if(string[i] == ch)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
	{
		printf("Character found!");
	}
	else
	{
		printf("Character not found!");
	}
}