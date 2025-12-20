// WAP to accept string from user and replace one character with a special symbol

#include <stdio.h>
void replaceChar(char *str, char find, char replace);

void main()
{
    int size;
    char find, replace;

    printf("Enter size of string: ");
    scanf("%d", &size);

    char str[size + 1];   

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the character to find: ");
    scanf(" %c", &find);

    printf("Enter the character to replace: ");
    scanf(" %c", &replace);

    replaceChar(str, find, replace);

    printf("String after replacing: %s\n", str);
}

void replaceChar(char *str, char find, char replace)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == find)
        {
            str[i] = replace;  
        }
    }
}
