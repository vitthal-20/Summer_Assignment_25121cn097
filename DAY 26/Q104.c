#include<stdio.h>

int main()
{
    int answer, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d",&answer);

    if(answer == 1)
        score++;

    printf("\nQ2. 5 + 5 = ?\n");
    printf("1. 8\n2. 10\n3. 12\n4. 15\n");
    scanf("%d",&answer);

    if(answer == 2)
        score++;

    printf("\nYour Score = %d/2",score);

    return 0;
}