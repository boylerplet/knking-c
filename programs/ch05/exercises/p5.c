/* Name: p5.c
 * Author: Amrut Wali
 * Description: Income tax calculator
 */

#include <stdio.h>

int main(void)
{
    float income, excess, tax;

    printf("Enter the total income: ");
    scanf("%f", &income);

    if (income < 750.00f) {
        tax = income * 0.01f;
    } else if (income >= 750.00f && income < 2250.00f) {
        excess = income - 750.00f;
        tax = 7.50f + excess * 0.02f;
    } else if (income >= 2250.00f && income < 3750.00f) {
        excess = income - 2250.00f;
        tax = 37.50f + excess * 0.03f;
    } else if (income >= 3750.00f && income < 5250.00f) {
        excess = income - 3750.00f;
        tax = 82.50f + excess * 0.02f;
    } else if (income >= 5250.00f && income < 7000.00f) {
        excess = income - 5250.00f;
        tax = 142.50f + excess * 0.02f;
    } else {
        excess = income - 7000.00f;
        tax = 230.00f + excess * 0.06f;
    }

    printf("Total tax: %.2f\n", tax);
}
