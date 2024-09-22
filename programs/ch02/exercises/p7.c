/* Name: p7.c
 *  Author: Amrut Wali
 *  Description: A program to count how many bills are required to represent a
 * quantity
 */

#include <stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main(void)
{
    int amount, inter;
    int twenty_required, ten_required, five_required, one_required;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    inter = amount;

    twenty_required = inter / TWENTY;
    inter = inter - twenty_required * TWENTY;

    ten_required = inter / TEN;
    inter = inter - ten_required * TEN;

    five_required = inter / FIVE;
    inter = inter - five_required * FIVE;

    one_required = inter / ONE;
    inter = inter - one_required * ONE;

    printf("Twenty required: %d\nTen required: %d\nFive required: %d\nOne "
           "required: %d\n",
           twenty_required, ten_required, five_required, one_required);

    return 0;
}
