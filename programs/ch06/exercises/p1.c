/* Name: p1.c
 * Author: Amrut Wali
 * Description: Largest of numbers
 */

#include <stdio.h>

int main(void)
{
    float number, maximum = 0.00f;

    do {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number > maximum) maximum = number;

    } while (number > 0.00f);

    printf("\nThe maximum number is: %.2f\n", maximum);
}
