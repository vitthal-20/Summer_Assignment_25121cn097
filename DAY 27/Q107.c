#include<stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Sum = %d",a+b);
            break;

        case 2:
            printf("Difference = %d",a-b);
            break;

        case 3:
            printf("Product = %d",a*b);
            break;

        case 4:
            printf("Division = %.2f",(float)a/b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}