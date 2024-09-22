/* Name: p14.c
 * Author: Amrut Wali
 * Description: Find the square root of a number with a formula
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    double x, y = 1.0, xoy, avg;

    printf("Enter a number: ");
    scanf("%lg", &x);

    while (1) {
        xoy = x / y;
        avg = (y + xoy) / 2.0;

        printf("%g\t\t%g\t\t%g\t\t%g\t\t\n", x, y, xoy, avg);

        if (fabs(y - avg) <= 0.00001 * y)
            break;
        y = avg;
    }

    printf("Square root: %g\n", avg);

    return 0;
}
