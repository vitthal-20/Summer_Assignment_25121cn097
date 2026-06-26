#include<stdio.h>

int main()
{
    int guess, number = 7;

    printf("Guess a number between 1 to 10: ");
    scanf("%d",&guess);

    if(guess == number)
        printf("Congratulations! Correct Guess.");
    else
        printf("Wrong Guess! Correct number is %d",number);

    return 0;
}