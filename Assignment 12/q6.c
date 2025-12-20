//WAP to take in a string and replace every blank space with special symbol.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]s", str);   // reads spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '*';
        }
    }

    printf("Modified string: %s", str);
    return 0;
}
