#include<stdio.h>

int main()
{
    int a[50],b[50];
    int n,m,i,j,flag;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&m);

    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    for(i=0;i<m;i++)
    {
        flag=0;

        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
                flag=1;
        }

        if(flag==0)
            printf("%d ",b[i]);
    }

    return 0;
}