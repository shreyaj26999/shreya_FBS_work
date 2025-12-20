//WAP to remove characters at odd index.

#include<stdio.h>

void main()
{
	char str[100],newstr[100];
	int i,j = 0;
	
	printf("Enter string: ");
	scanf("%s",str);
	
	for(int i = 0;str[i] != '\0';i++)
	{
		if(i % 2 == 0)
		{
			newstr[j++] = str[i];
			newstr[j] = '\0';
		}
	}
	printf("After removing odd index characters: %s",newstr);
}