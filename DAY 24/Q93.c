#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[200];

    gets(a);
    gets(b);

    strcpy(c,a);
    strcat(c,a);

    if(strstr(c,b))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}