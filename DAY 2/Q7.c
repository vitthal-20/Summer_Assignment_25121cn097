#include<stdio.h>

int main()
{
    int n,pro=1;

    scanf("%d",&n);

    while(n>0)
    {
        pro=pro*(n%10);
        n=n/10;
    }

    printf("%d",pro);

    return 0;
}