/* Name: p3.c
 *  Author: Amrut Wali
 *  Description:
 */

#include <stdio.h>

int main(void)
{
    int d1, d2, d3;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("Reversed digits are: %1d%1d%1d\n", d3, d2, d1);

    return 0;
}
