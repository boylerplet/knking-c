/* Name: p17.c
 * Author: Amrut Wali
 * Description: Magic Square
 */

// 15 01 07 09
// 04 06 12 14
// 05 11 13 03
// 10 16 02 08
//
// 09 15 01 07
// 14 04 06 12
// 03 05 11 13
// 08 10 16 02

#include <stdio.h>

int main(void)
{
    int n = 0, x = 0, y = 0, i = 0, j = 0, count = 1, current = 0;

    printf("Enter dimension of the square: ");
    scanf("%d", &n);

    int square[n][n];

    // initialize square with 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }

    j = current = n / 2;
    while (count <= n * n) {
        if (!square[i][j]) {
            square[i][j] = count;
            count++;
        }
        // move current to one up one right
        if (i == 0) {
            i = n - 1;
        } else {
            i--;
        }
        if (j + 1 == n) {
            j = 0;
        } else {
            j++;
        }
        if (square[i][j] >= 1 && square[i][j] <= count) {
            // bring back current to the previous position
            if (i + 1 == n) {
                i = 0;
            } else {
                i++;
            }
            if (j == 0) {
                j = n - 1;
            } else {
                j--;
            }
            // Now move the i one below
            if (i + 1 == n) {
                i = 0;
            } else {
                i++;
            }
        }
    }

    current = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
