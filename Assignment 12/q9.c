//WAP to copy one string to another without built in functions.

#include<stdio.h>

int main() {
    char str1[100], str2[200];
    int i;

    printf("Enter the string: ");
    gets(str1);   // unsafe, but keeping as you used it

    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];   // correct: copy each char
    }
    str2[i] = '\0';  // terminate the copied string

    printf("Copied string = %s", str2);
}
