#include<stdio.h>

int main()
{
    int total, present;
    float attendance;

    printf("Enter Total Classes: ");
    scanf("%d",&total);

    printf("Enter Classes Attended: ");
    scanf("%d",&present);

    attendance = (present * 100.0) / total;

    printf("Attendance = %.2f%%\n",attendance);

    if(attendance >= 75)
        printf("Eligible for Exam");
    else
        printf("Not Eligible for Exam");

    return 0;
}