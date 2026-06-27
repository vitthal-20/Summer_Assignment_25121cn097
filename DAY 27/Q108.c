#include<stdio.h>

int main()
{
    int password;

    printf("Enter Password: ");
    scanf("%d",&password);

    if(password == 12345)
        printf("Access Granted");
    else
        printf("Wrong Password");

    return 0;
}