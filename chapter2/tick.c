#include <stdio.h>

int main(void)
{
    int starColumnIndices[] = { 3, 4, 5, 4, 3, 2, 1, 0 };
    int columns = 8, rows = 6, currentRow, currentColumn;
    for (currentRow = 0; currentRow < rows; currentRow++) {
        for (currentColumn = 0; currentColumn < columns; currentColumn++) {
            if (starColumnIndices[currentColumn] == currentRow) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
