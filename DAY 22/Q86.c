#include<stdio.h>

int main()
{
    char s[100];
    int i=0,count=1;

    gets(s);

    while(s[i]!='\0')
    {
        if(s[i]==' ')
            count++;

        i++;
    }

    printf("%d",count);

    return 0;
}