/* Name: p12.c
 * Author: Amrut Wali
 * Description: Calculate equation
 */

#include <stdio.h>

int main(void)
{
    float acc, number, n1, n2, n3, n4, left, right;
    char ch = ' ', c1, c2;

    printf("Enter an expression: ");

    scanf("%f", &acc);

    while ((ch = getchar()) != '\n') {
        switch (ch) {
        case '+':
            scanf("%f", &number);
            acc += number;
            break;
        case '-':
            scanf("%f", &number);
            acc -= number;
            break;
        case '*':
            scanf("%f", &number);
            acc *= number;
            break;
        case '/':
            scanf("%f", &number);
            acc /= number;
            break;
        }
    }

    printf("Value of expression: %.2f\n", acc);

    return 0;
}
