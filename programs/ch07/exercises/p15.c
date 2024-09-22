/* Name: p1.c
 * Author: Amrut Wali
 * Description: Factorial of a number
 */

#include <stdio.h>

int main(void)
{
    short int factorial = 1, n;

    printf("Enter a number: ");
    scanf("%hd", &n);

    for (short int i = n; i > 0; i--) {
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}
