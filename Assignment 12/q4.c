//WAP to form a new string by exchanging 1st and last characters.

#include<stdio.h>
#include<string.h>

void main()
{
	char str[100],temp;
	
	printf("Enter the string: ");
	scanf("%s",str);
	
	int len = strlen(str);
	
	temp = str[0];
	str[0] = str[len-1];
	str[len-1] = temp;
	
	printf("New string: %s",str);
}