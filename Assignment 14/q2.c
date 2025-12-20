/*2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
these members from user and display them. Also perform addition of two time variables
and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
the given time into sec.*/

#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

struct Time acceptTime()
{
    struct Time t;

    printf("Enter Hours   : ");
    scanf("%d", &t.hrs);
    printf("Enter Minutes : ");
    scanf("%d", &t.min);
    printf("Enter Seconds : ");
    scanf("%d", &t.sec);

    return t;
}

void displayTime(struct Time t)
{
    printf("%d:%d:%d\n", t.hrs, t.min, t.sec);
}

struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time sum;

    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min;
    sum.hrs = t1.hrs + t2.hrs;

    if (sum.sec >= 60)
    {
        sum.min++;
        sum.sec = sum.sec - 60;
    }

    if (sum.min >= 60)
    {
        sum.hrs++;
        sum.min = sum.min - 60;
    }

    return sum;
}

long int convertToSeconds(struct Time t)
{
    return (t.hrs * 3600L + t.min * 60L + t.sec);
}

int main()
{
    struct Time t1, t2, t3;
    long int totalSeconds;

    printf("Enter First Time:\n");
    t1 = acceptTime();

    printf("\nEnter Second Time:\n");
    t2 = acceptTime();

    printf("\nFirst Time  : ");
    displayTime(t1);

    printf("Second Time : ");
    displayTime(t2);

    t3 = addTime(t1, t2);

    printf("\nAdded Time  : ");
    displayTime(t3);

    totalSeconds = convertToSeconds(t3);
    printf("\nTotal Seconds: %ld\n", totalSeconds);

}
