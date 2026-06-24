#include<stdio.h>

int main()
{
    char s[100];
    int i=0,len=0,max=0;

    gets(s);

    while(1)
    {
        if(s[i]!=' ' && s[i]!='\0')
            len++;

        else
        {
            if(len>max)
                max=len;

            len=0;
        }

        if(s[i]=='\0')
            break;

        i++;
    }

    printf("%d",max);

    return 0;
}