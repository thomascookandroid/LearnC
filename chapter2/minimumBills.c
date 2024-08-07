#include <stdio.h>

int main(void)
{
    int total, twenties, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &total); 
    twenties = total / 20;
    total -= twenties * 20;
    tens = total / 10;
    total -= tens * 10;
    fives = total / 5;
    total -= fives * 5;
    ones = total;
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, ones);
    return 0;
}
