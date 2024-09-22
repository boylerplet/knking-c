/*
 * Name: p7.c
 * Author: Amrut Wali
 * Description: Square of number using for loop
 */

#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (odd = 3, square = 1, i = 1; i <= n; i++, odd += 2) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
