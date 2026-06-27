#include<stdio.h>

int main()
{
    int unit;
    float bill;

    printf("Enter Units: ");
    scanf("%d",&unit);

    if(unit <= 100)
        bill = unit * 2;
    else if(unit <= 200)
        bill = unit * 3;
    else
        bill = unit * 5;

    printf("Electricity Bill = %.2f", bill);

    return 0;
}