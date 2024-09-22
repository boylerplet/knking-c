/*
 * Name: p12.c
 * Author: Amrut Wali
 * Description: Estimation of e with epsilon
 */

#include <stdio.h>

int main(void)
{
    int n;
    float e, product = 1.00f, sum = 0.00f;
    float epsilon, term;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    /*e = 1/1! + 1/2! + 1/3! + ... + 1/n!*/
    for (int i = 1; i < n; i++) {
        product *= i;
        sum += 1 / product;

        if (epsilon > 1 / product) {
            term = 1 / product;
            break;
        }
    }

    e = sum;

    printf("Approximated value of e: %f\nEpsilon: %f", e, term);
}
