#include<stdio.h>

int main()
{
    char s[100];
    int i,j;

    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';)
        {
            if(s[i]==s[j])
            {
                int k;

                for(k=j;s[k]!='\0';k++)
                    s[k]=s[k+1];
            }
            else
                j++;
        }
    }

    printf("%s",s);

    return 0;
}