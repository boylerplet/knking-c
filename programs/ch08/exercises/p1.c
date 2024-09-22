/* Checks numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    int digit, count = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        if (!digit_seen[digit])
            digit_seen[digit] = true;
        else {
            digit_repeated[digit] = true;
            count++;
        }

        n /= 10;
    }

    if (count) {
        printf("Repeated digits:");
        for (int i = 0; i < 10; i++) {
            if (digit_repeated[i] == true)
                printf(" %d", i);
        }
        printf("\n");
    } else {
        printf("No repeated digit\n");
    }

    return 0;
}
