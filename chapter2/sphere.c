#include <stdio.h>
#include <math.h>

int main(void)
{
    int radius;
    float volume;
    printf("Enter radius: ");
    scanf("%d", &radius);
    volume = (4.0f / 3.0f) * M_PI * (radius * radius * radius);
    printf("Volume: %f\n", volume);
    return 0;
}
