#include<stdio.h>

int main()
{
    int m1,m2,m3,total;
    float per;

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("Total = %d\n",total);
    printf("Percentage = %.2f\n",per);

    if(per >= 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}