#include <stdio.h>

int main(void)
{
    int numeratorLeft, denominatorLeft, numeratorRight, denominatorRight, numeratorResult, denominatorResult;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &numeratorLeft, &denominatorLeft, &numeratorRight, &denominatorRight);
    numeratorResult = numeratorLeft * denominatorRight + numeratorRight * denominatorLeft;
    denominatorResult = denominatorLeft * denominatorRight;
    printf("The sum is: %d/%d\n", numeratorResult, denominatorResult);
}
