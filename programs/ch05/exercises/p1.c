/* Name: p1.c
 * Author: Amrut Wali
 * Description: A program to checck for the number of digits
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        printf("Number of digits: 1\n");
    } else if (number >= 10 && number <= 99) {
        printf("Number of digits: 2\n");
    } else if (number >= 100 && number <= 999) {
        printf("Number of digits: 3\n");
    } else if (number >= 1000 && number <= 9999) {
        printf("Number of digits: 4\n");
    }

    return 0;
}
