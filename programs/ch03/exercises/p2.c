/* Name: p2.c
 *  Author: Amrut Wali
 *  Description: A file to print formatted date
 */

#include <stdio.h>

int main(void)
{
    int item;
    float price;
    int day, month, year;

    printf("Enter Item number: ");
    scanf("%d", &item);

    printf("Enter the item price: ");
    scanf("%f", &price);

    printf("Enter date: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\tPurchase\n\t\tPrice\t\tDate\n%-3d\t\t$%7.2f\t%2d/%2d/%4d",
           item, price, day, month, year);

    return 0;
}
