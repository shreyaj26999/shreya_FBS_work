/*WAP to initialize some amount in your account.The given choice to user for deposit or withdraw 
and display updated amount.Condition to withdaw
(if balance is less than 3000 display cant withdraw the amount balance is not sufficient.)
*/
#include<stdio.h>

float updateBalance(float bal, char choice, float amount);

void main()
{
    float balance, amount;
    char choice;

    printf("Enter the initial amount: ");
    scanf("%f", &balance);

    printf("Withdraw or deposit (w/d): ");
    scanf(" %c", &choice);  // space before %c

    printf("Enter the amount: ");
    scanf("%f", &amount);

    balance = updateBalance(balance, choice, amount);

    printf("Final balance = %.2f", balance);
}

float updateBalance(float bal, char choice, float amount)
{
    if (choice == 'd') {
        bal = bal + amount;
    }
    else if (choice == 'w') {
        if (bal >= 3000 && bal >= amount) {
            bal = bal - amount;
        }
        else {
            printf("Cannot withdraw! Balance is not sufficient.\n");
        }
    }
    else {
        printf("Invalid choice.\n");
    }

    return bal;
}
