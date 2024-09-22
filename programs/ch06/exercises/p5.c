/*
 * Name: p5.c
 * Author: Amrut Wali
 * Description: Revese a number with any number of digits
 */

#include <stdio.h>

int main(void)
{
    int number, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversed number : ");

    while (number > 0) {
        digit = number % 10;
        printf("%d", digit);

        number /= 10;
    }

    printf("\n");

    return 0;
}
