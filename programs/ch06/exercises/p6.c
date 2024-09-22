/*
 * Name: p6.c
 * Author: Amrut Wali
 * Description: square less than number
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number / 2; i++) {
        if (i * i <= number && i * i % 2 == 0)
            printf("%d\n", i * i);
    }

    return 0;
}
