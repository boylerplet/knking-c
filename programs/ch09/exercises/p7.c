/* Name: p7.c
 * Author: Amrut Wali
 * Description:
 */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x = 0, n = 0;
    int result = 0;

    printf("Enter the number to raise: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    result = power(x, n);
    printf("The power is: %d", result);

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0) {
        return power(x, n / 2) * power(x, n / 2);
    }
    return x * power(x, n - 1);
}
