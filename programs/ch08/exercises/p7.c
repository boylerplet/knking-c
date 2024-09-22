/* Name: p7.c
 * Author: Amrut Wali
 * Description: Read a 5x5 array and print the row sum and column sum
 */

#include <stdio.h>

#define ARRAY_LENGTH 5

int main(void)
{
    int numbers[5][5] = {{0}};
    int i = 0, j = 0, row = 0, column = 0;

    // Read into array
    while (i < ARRAY_LENGTH) {
        printf("Enter row %d: ", i + 1);
        while (j < ARRAY_LENGTH) {
            scanf("%d", &numbers[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    i = 0;
    j = 0;

    // TODO: Calculate row total
    printf("\nRow totals: ");
    while (i < ARRAY_LENGTH) {
        while (j < ARRAY_LENGTH) {
            row += numbers[i][j];
            j++;
        }
        printf("%d ", row);
        row = 0;
        j = 0;
        i++;
    }

    i = 0;
    j = 0;
    // TODO: Calculate column total
    printf("\nRow totals: ");
    while (i < ARRAY_LENGTH) {
        while (j < ARRAY_LENGTH) {
            column += numbers[j][i];
            j++;
        }
        printf("%d ", column);
        column = 0;
        j = 0;
        i++;
    }

    return 0;
}
