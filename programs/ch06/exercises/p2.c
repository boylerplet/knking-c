/* Name: p2.c
 * Author: Amrut Wali
 * Description: Find GCD
 */

#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n > 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    // m is the GCD
    printf("The GCD is: %d\n", m);

    return 0;
}
