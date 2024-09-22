/* Name: p6.c
 * Author: Amrut Wali
 * Description: compute polynomial value
 */

#include <stdio.h>

long int polynomial(int x);

int main(void)
{
    int x = 0;
    long int result = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    result = polynomial(x);

    printf("The value of the polynomial is: %ld", result);

    return 0;
}

long int polynomial(int x) {
    return (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (1 * x * x) + (7 * x) - 6;
}
