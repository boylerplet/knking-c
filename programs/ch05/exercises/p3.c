
/* Name: p3
 * Author: Amrut Wali
 * Description: Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, rival_commission, value, price_per_share;
    int number_of_shares;

    printf("Enter number of shares: ");
    scanf("%d", &number_of_shares);

    printf("Enter price of one share: ");
    scanf("%f", &price_per_share);

    value = number_of_shares * price_per_share;

    // Commission calculation
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    // Rival commission calculation
    if (value < 2000.00f)
        rival_commission = 33.00f + 0.03f * number_of_shares;
    else
        rival_commission = 33.00f + 0.02f * number_of_shares;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\nRival Commission: $%.2f\n", commission,
           rival_commission);
    return 0;
}
