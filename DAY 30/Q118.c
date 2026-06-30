#include<stdio.h>

int main()
{
    float bill, gst, total;

    printf("Enter Electricity Bill: ");
    scanf("%f",&bill);

    gst = bill * 0.18;
    total = bill + gst;

    printf("GST = %.2f\n",gst);
    printf("Total Bill = %.2f",total);

    return 0;
}