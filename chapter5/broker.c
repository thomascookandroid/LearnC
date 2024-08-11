#include <stdio.h>

int main(void)
{
    int numberOfShares;
    float pricePerShare, value, yourCommission, rivalsCommission;

    printf("Enter number of shares: ");
    scanf("%d", &numberOfShares);
    printf("Enter price per share: ");
    scanf("%f", &pricePerShare);
    value = numberOfShares * pricePerShare;
    if (value < 2500.00f)
        yourCommission = 30.00f + .017f * value;
    else if (value < 6520.00f)
        yourCommission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        yourCommission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        yourCommission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        yourCommission = 155.00f + .0011f * value;
    else
        yourCommission = 255.0f + .0009f * value;

    if (yourCommission < 39.00f)
        yourCommission = 39.00f;

    if (numberOfShares < 2000)
        rivalsCommission = 33.00f + .03 * numberOfShares;
    else
        rivalsCommission = 33.00f + .02f * numberOfShares;

    printf("Your commission: $%.2f\n", yourCommission);
    printf("Rivals commission: $%.2f\n", rivalsCommission);
    return 0;
}
