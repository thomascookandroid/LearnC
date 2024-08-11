#include <stdio.h>

int main(void)
{
    int a, b, c, d, smallest, largest;
    printf("Enter four integers (a b c d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    smallest = a;
    largest = smallest;
    
    if (b >= largest)
        largest = b;
    else
        smallest = b;
    if (c >= largest)
        largest = c;
    else if (c < smallest)
        smallest = c;
    if (d >= largest)
        largest = d;
    else if (d < smallest)
        smallest = d;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}
