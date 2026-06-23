#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,count1,count2;

    gets(a);
    gets(b);

    for(i='a';i<='z';i++)
    {
        count1=0;
        count2=0;

        for(j=0;a[j]!='\0';j++)
            if(a[j]==i)
                count1++;

        for(j=0;b[j]!='\0';j++)
            if(b[j]==i)
                count2++;

        if(count1!=count2)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}