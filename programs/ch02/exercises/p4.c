/* Name: p4.c
*  Author: Amrut Wali
*  Description: A C Program to print a taxed value of a given amount
*/

#include <stdio.h>

int main(void)
{
    float amount, taxed_amount;

    printf("Enter the amount to be taxed: ");
    scanf("%f", &amount);

    taxed_amount = amount + amount * (5.0f / 100.0f);
    printf("Total taxed amount: %.2f", taxed_amount);

    return 0;
}
