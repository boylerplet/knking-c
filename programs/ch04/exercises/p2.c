/* Name: p2.c
*  Author: Amrut Wali
*  Description: Extend program p1 to three digit numbers
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    printf("The reversed number : %1d%1d%1d\n", number % 10, number / 10 % 10, number / 10 / 10);

    return 0;
}
