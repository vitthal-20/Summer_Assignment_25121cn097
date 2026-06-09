#include<stdio.h>

int main()
{
    int n,temp,sum=0,r;

    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }

    if(sum==temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}