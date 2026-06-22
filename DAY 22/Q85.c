#include<stdio.h>

int main()
{
    char s[100];
    int i=0,j;

    gets(s);

    while(s[i]!='\0')
        i++;

    for(j=0;j<i/2;j++)
    {
        if(s[j]!=s[i-1-j])
        {
            printf("Not Palindrome");
            return 0;
        }
    }

    printf("Palindrome");

    return 0;
}