#include <stdio.h>

int main(void)
{
    int _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13,
    step1, step2, step3, step4, step5, step6;
    printf("Enter an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13);
    step1 = _2 + _4 + _6 + _8 + _10 + _12;
    step2 = _1 + _3 + _5 + _7 + _9 + _11;
    step3 = step1 * 3 + step2;
    step4 = step3 - 1;
    step5 = step4 % 10;
    step6 = 9 - step5;
    if (step6 == _13)
        printf("VALID\n");
    else 
        printf("NOT VALID\n");
    return 0;
}
