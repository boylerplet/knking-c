/* Name: p8.c
 * Author: Amrut Wali
 * Description: Print a calendar
 */

#include <stdio.h>

int main(void)
{
    int days, start;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    printf("Enter the month start (1=Sunday and 7=Saturday): ");
    scanf("%d", &start);

    for (int i = 1, day = 1; day <= days; i++) {
        if (i < start)
            printf("   ");
        else {
            printf("%2d ", day);

            if ((i) % 7 == 0)
                printf("\n");

            day++;
        }
    }

    return 0;
}
