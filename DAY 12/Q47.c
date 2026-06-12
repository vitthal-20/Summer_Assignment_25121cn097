#include<stdio.h>

int fib(int n)
{
    int a=0,b=1,c,i;

    for(i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return a;
}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d",fib(n));

    return 0;
}