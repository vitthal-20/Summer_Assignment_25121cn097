#include<stdio.h>

int main()
{
    int id, password;

    printf("Enter User ID: ");
    scanf("%d",&id);

    printf("Enter Password: ");
    scanf("%d",&password);

    if(id == 101 && password == 1234)
        printf("Login Successful");
    else
        printf("Invalid User ID or Password");

    return 0;
}