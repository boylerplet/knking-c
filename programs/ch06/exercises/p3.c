/* Name: p3.c
 * Author: Amrut Wali
 * Description: Fraction Reduction
 */

#include <stdio.h>

int main(void)
{

    int n1, n2, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);

    m = n1;
    n = n2;

    while (n > 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("The reduced fraction: %d/%d\n", n1 / m, n2 / m);

    return 0;
}
