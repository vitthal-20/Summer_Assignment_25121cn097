#include<stdio.h>

int main()
{
    int pin, amount = 5000, withdraw;

    printf("Enter PIN: ");
    scanf("%d",&pin);

    if(pin == 1234)
    {
        printf("Enter withdrawal amount: ");
        scanf("%d",&withdraw);

        if(withdraw <= amount)
        {
            amount = amount - withdraw;
            printf("Transaction Successful.\n");
            printf("Remaining Balance = %d",amount);
        }
        else
        {
            printf("Insufficient Balance.");
        }
    }
    else
    {
        printf("Wrong PIN.");
    }

    return 0;
}