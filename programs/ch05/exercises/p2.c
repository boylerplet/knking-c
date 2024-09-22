/* Name: p2.c
 * Author: Amrut Wali
 * Description: A program to convert 24 hour formatted time to 12 hour
 */

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &minute);

    printf("Equivalent 12-hour time: ");

    if (hour >= 12 && hour <= 24) {
        printf("%2.1d", hour - 12);
    } else {
        printf("%2.1d", hour);
    }

    printf(":%2.2d ", minute);

    if (hour >= 12) {
        printf("PM\n");
    } else {
        printf("AM\n");
    }

    return 0;
}
