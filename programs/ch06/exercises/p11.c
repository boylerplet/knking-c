/* Name: p11.c
* Author: Amrut Wali
* Description: Estimation of e
*/

#include <stdio.h>

int main(void)
{
    int n;
    float e, product = 1.00f, sum = 0.00f;

    printf("Enter a number: ");
    scanf("%d", &n);

    /*e = 1/1! + 1/2! + 1/3! + ... + 1/n!*/
    for (int i = 1; i < n; i++) {
        product *= i;
        sum += 1 / product;
    }

    e = sum;

    printf("Approximated value of e: %.9f\n", e);

    return 0;
}
