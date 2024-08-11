#include <stdio.h>

int main(void)
{
    int firstDay, firstMonth, firstYear,
        secondDay, secondMonth, secondYear;

    printf("Enter first date (dd/mm/yy): \n");
    scanf("%d/%d/%d", &firstDay, &firstMonth, &firstYear);
    printf("Enter second date (dd/mm/yy): \n");
    scanf("%d/%d/%d", &secondDay, &secondMonth, &secondYear);
    if (firstYear < secondYear) {
        printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d\n",
               firstDay, firstMonth, firstYear,
               secondDay, secondMonth, secondYear);
    } else if (firstYear == secondYear) {
        if (firstMonth < secondMonth) {
            printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d\n",
                   firstDay, firstMonth, firstYear,
                   secondDay, secondMonth, secondYear);
        } else if (firstMonth == secondMonth) {
            if (firstDay < secondDay) {
                printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d\n",
                       firstDay, firstMonth, firstYear,
                       secondDay, secondMonth, secondYear);
            } else if (firstDay == secondDay) {
                printf("%d/%d/%2.2d is the same date as %d/%d/%2.2d\n",
                       firstDay, firstMonth, firstYear,
                       secondDay, secondMonth, secondYear);
            } else {
                printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d\n",
                       secondDay, secondMonth, secondYear,
                       firstDay, firstMonth, firstYear);
            }
        } else {
            printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d\n",
                   secondDay, secondMonth, secondYear,
                   firstDay, firstMonth, firstYear);
        }
    } else {
        printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d\n",
               secondDay, secondMonth, secondYear,
               firstDay, firstMonth, firstYear);
    }
    return 0;
}
