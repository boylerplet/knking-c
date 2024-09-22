/* Name: p8.c
*  Author: Amrut Wali
*  Description: A program that calculates the balance after one two and three months of loan
*/

#include <stdio.h>

#define NUMBER_OF_MONTHS 12

int main(void)
{
    float loan_amount, yearly_interest_rate, monthly_interest_rate, monthly_payment, balance;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &yearly_interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = (yearly_interest_rate / 100.0f) / NUMBER_OF_MONTHS;

    balance = loan_amount;

    /* After first month */
    balance = balance + balance * monthly_interest_rate;
    balance = balance - monthly_payment;
    printf("Balance after first month: %.2f\n", balance);


    /* After second month */
    balance = balance + balance * monthly_interest_rate;
    balance = balance - monthly_payment;
    printf("Balance after second month: %.2f\n", balance);


    /* After third month */
    balance = balance + balance * monthly_interest_rate;
    balance = balance - monthly_payment;
    printf("Balance after third month: %.2f\n", balance);


    return 0;
}
