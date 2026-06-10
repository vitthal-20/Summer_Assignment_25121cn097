#include<stdio.h>

int main()
{
    int n,d=0,p=1;

    scanf("%d",&n);

    while(n>0)
    {
        d=d+(n%10)*p;
        p=p*2;
        n=n/10;
    }

    printf("%d",d);

    return 0;
}