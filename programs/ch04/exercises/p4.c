/* Name: p4.c
*  Author: Amrut Wali
*  Description: Print number in Octal
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    printf("In octal, your number is: %1d%1d%1d%1d%1d\n", number / 8 / 8 / 8 / 8 % 8 , number / 8 / 8 / 8 % 8, number / 8 / 8 % 8, number / 8 % 8, number % 8);

    return 0;
}
