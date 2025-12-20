//WAP to check if the string is palindrome or not.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int len, flag = 1;

    printf("Enter string: ");
    scanf(" %[^\n]", str);  // reads entire line including spaces

    // Convert to lowercase
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    // Check palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("String is palindrome.\n");
    else
        printf("String is not palindrome.\n");

    return 0;
}
