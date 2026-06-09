#include<stdio.h>

int main()
{
    int n,i,j,count;

    scanf("%d",&n);

    for(i=n;i>=2;i--)
    {
        if(n%i==0)
        {
            count=0;

            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    count++;
            }

            if(count==2)
            {
                printf("%d",i);
                break;
            }
        }
    }

    return 0;
}