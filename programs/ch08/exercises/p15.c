/* Name: p15.c
 * Author: Amrut Wali
 * Description: Ceaser chipher
 */

#include <stdio.h>

int main(void)
{
    char sentence[100] = {0}, ch = 0;
    int i = 0, n = 0;

    printf("Enter a message to be encrypted: ");
    while (ch != '\n') {
        ch = getchar();
        sentence[i] = ch;
        i++;
    }
    i = 0;

    printf("Enter shift amount: ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    while (sentence[i] != 0) {
        ch = sentence[i];
        if (ch >= 'a' && ch <= 'z') {
            putchar((ch - 'a' + n) % 26 + 'a');
            i++;
        } else if (ch >= 'A' && ch <= 'Z') {
            putchar((ch - 'A' + n) % 26 + 'A');
            i++;
        } else {
            putchar(ch);
            i++;
        }
    }

    return 0;
}
