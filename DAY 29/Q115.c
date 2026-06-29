#include<stdio.h>

int main()
{
    int n, i, num;
    int even = 0, odd = 0;

    printf("How many numbers? ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&num);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Numbers = %d\n",even);
    printf("Odd Numbers = %d",odd);

    return 0;
}