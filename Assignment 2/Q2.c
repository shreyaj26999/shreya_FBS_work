//Accept three sides of triangle from the user and determine whether the triangle is equilateral,isocseles or scalane

#include <stdio.h>

void main() {
    int a = 10, b = 20, c = 45;

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
