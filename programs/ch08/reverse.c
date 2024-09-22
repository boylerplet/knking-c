/* Reverse an array */
#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;

    printf("Enter 10 numbers: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array: ");

    for (i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n ");
}
