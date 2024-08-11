#include <stdio.h>

int main(void)
{
    int income, currentBracket = 750, nextBracket = currentBracket;
    float taxDue;
    printf("Enter income: ");
    scanf("%d", &income);
    if (income < nextBracket) {
        taxDue = income * 0.01f;
        nextBracket = 2250;
    } else if (income < nextBracket) {
        taxDue = 7.50f + 0.02f * (income - currentBracket);
        currentBracket = nextBracket;
        nextBracket = 3750;
    } else if (income < nextBracket) {
        taxDue = 37.50f + 0.03f * (income - currentBracket);
        currentBracket = nextBracket;
        nextBracket = 5250;
    } else if (income < nextBracket) {
        taxDue = 82.50f + 0.04f * (income - currentBracket);
        currentBracket = nextBracket;
        nextBracket = 7000;
    } else if (income < nextBracket) {
        taxDue = 142.50f + 0.05f * (income - currentBracket);
        currentBracket = nextBracket;
    } else {
        taxDue = 230.00f + 0.05f * (income - currentBracket);
    }
    printf("Tax due: $%.2f\n", taxDue);
    return 0;
}
