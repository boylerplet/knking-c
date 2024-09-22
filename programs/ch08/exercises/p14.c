/* Name: p14.c
 * Author: Amrut Wali
 * Description: Reverse words
 */

#include <stdio.h>

int main(void)
{
    char sentence[100] = {0}, buffer[50], ch = 0;
    int i = 0, j = 0, length = 0;

    printf("Enter a sentence: ");
    while (ch != '.' && ch != '!' && ch != '?' && ch != '\n') {
        ch = getchar();
        sentence[i] = ch;
        i++;
    }
    length = i;
    i--;
    ch = sentence[i];
    i--;

    while (i >= 0) {
        while (sentence[i] != ' ' && i >= 0) {
            buffer[j] = sentence[i];
            i--;
            j++;
        }
        if (sentence[i] == ' ' || i < 0) {
            while (j > 0) {
                putchar(buffer[j - 1]);
                j--;
            }
            if (i >= 0)
                putchar(' ');
            i--;
        }
    }
    putchar(ch);

    return 0;
}
