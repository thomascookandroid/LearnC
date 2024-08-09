#include <stdio.h>

int main(void)
{
    int base10, base8;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &base10);
    base8 = base10 % 8;
    base10 /= 8;
    base8 += (base10 % 8) * 10;
    base10 /= 8;
    base8 += (base10 % 8) * 100;
    base10 /= 8;
    base8 += (base10 % 8) * 1000;
    base10 /= 8;
    base8 += (base10 % 8) * 10000;
    base10 /= 8;
    printf("In octal, your number is: %.5d\n", base8);
    return 0;
}
