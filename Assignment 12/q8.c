//WAP to calculate number of words preseent in a string.
#include <stdio.h>

int main() {
    char str[200];
    int words = 0;

    printf("Enter the string: ");
    scanf(" %[^\n]", str);   // <-- reads full line with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')) {
            words++;  // count a new word
        }
    }

    printf("Number of words = %d", words);
    return 0;
}
