
#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin, choice;
    float balance = 5000, amount;

    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin)
    {
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Balance = %.2f", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Deposited Successfully");
                printf("\nBalance = %.2f", balance);
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("Please collect your money");
                    printf("\nBalance = %.2f", balance);
                }
                else
                {
                    printf("Insufficient Balance");
                }
                break;

            case 4:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice");
        }
    }
    else
    {
        printf("Invalid PIN");
    }

    return 0;
}
