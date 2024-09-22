/* Name: p1.c
 *  Author: Amrut Wali
 *  Description: Reverse a two digit number
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a two digit number: ");
    scanf("%d", &number);

    printf("The reversed number : %d%d\n", number % 10, number / 10);

    return 0;
}
