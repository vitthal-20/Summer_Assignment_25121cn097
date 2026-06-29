#include<stdio.h>

int main()
{
    int n, i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("How many numbers? ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive = %d\n",positive);
    printf("Negative = %d\n",negative);
    printf("Zero = %d",zero);

    return 0;
}