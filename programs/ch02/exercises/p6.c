/* Name: p6.c
 *  Author: Amrut Wali
 *  Description: A program to print a polynomial
 */

#include <stdio.h>

int main(void)
{
    int x, polynomial;

    printf("Enter the value for x: ");
    scanf("%d", &x);

    polynomial = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("Result of the polynomial is: %d", polynomial);

    return 0;
}
