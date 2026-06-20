#include<stdio.h>

int main()
{
    int a[10][10];
    int n,i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                printf("Not Symmetric");
                return 0;
            }
        }
    }

    printf("Symmetric");

    return 0;
}