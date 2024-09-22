/* Name: p1.c
*  Author: Amrut Wali
*  Description: A program to do date conversion
*/

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter Date in the format mm/dd/yyyy: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered %4.4d%2.2d%2.2d", year, month, day);

    return 0;
}

