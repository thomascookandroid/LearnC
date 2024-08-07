#include <stdio.h>
#define TAX 5.0f

int main(void)
{
    float beforeTax, afterTax;
    printf("Enter an amount: ");
    scanf("%f", &beforeTax);
    afterTax = beforeTax + ((beforeTax / 100) * TAX); 
    printf("With tax added: %.2f\n", afterTax);
    return 0;
}
