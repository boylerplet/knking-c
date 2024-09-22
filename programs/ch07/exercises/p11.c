/* Name: p11.c
 * Author: Amrut Wali
 * Description: Read complex strings
 */

#include <stdio.h>

int main(void)
{
    char ch, initial = '\0';

    printf("Enter a name: ");

    initial = getchar();

    while ((ch = getchar()) != ' ');

    while ((ch = getchar()) != '\n') {
	putchar(ch);
    }

    putchar(',');
    putchar(' ');
    putchar(initial);
    putchar('.');

    return 0;
}
