/* Read digits and duplicate and mention the duplicated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit_count[10] = {0};
    int digit, count = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        if (!digit_seen[digit])
            digit_seen[digit] = true;
        else {
            digit_count[digit]++;
            count++;
        }

        n /= 10;
    }

    if (count) {
        printf("Repeated digit: ");
        for (int i = 0; i < 10; i++) {
            printf(" %d", i);
        }
        printf("\n");
        printf("Repeated count: ");
        for (int i = 0; i < 10; i++) {
            printf(" %d", digit_count[i]);
        }
    }
    else
        printf("No repeated digit\n");

    return 0;
}
