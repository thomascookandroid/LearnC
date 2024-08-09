#include <stdio.h>

int main(void)
{
    int hundreds, tens, ones, reversedNumber;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);
    reversedNumber = ones * 100 + tens * 10 + hundreds;
    printf("The reversal is %d\n", reversedNumber);
    return 0;
}
