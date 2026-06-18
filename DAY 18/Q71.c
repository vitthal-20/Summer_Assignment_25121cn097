#include<stdio.h>

int main()
{
    int a[100],n,i,x,low=0,high,mid;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&x);

    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==x)
        {
            printf("Found");
            return 0;
        }

        if(a[mid]<x)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Not Found");

    return 0;
}