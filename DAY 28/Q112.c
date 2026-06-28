#include<stdio.h>

int main()
{
    int a,b,choice;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    do
    {
        printf("\n1.Add");
        printf("\n2.Subtract");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\n5.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Sum = %d\n",a+b);
                break;

            case 2:
                printf("Difference = %d\n",a-b);
                break;

            case 3:
                printf("Product = %d\n",a*b);
                break;

            case 4:
                printf("Division = %.2f\n",(float)a/b);
                break;

            case 5:
                printf("Program Ended");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice != 5);

    return 0;
}