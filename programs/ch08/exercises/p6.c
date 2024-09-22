/* Name: p6.c
 * Author: Amrut Wali
 * Description: B1FF encoding
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char sentence[100] = {0}, ch;

    printf("Enter a sentence: ");

    int i = 0;
    while ((ch = getchar()) != '\n') {
        sentence[i] = ch;
        i++;
    }

    i = 0;
    printf("B1FF sentence: ");

    while (sentence[i] != 0) {
        ch = sentence[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = toupper(ch);
        }

        switch (ch) {
        case 'A':
            ch = '4';
            break;
        case 'B':
            ch = '8';
            break;
        case 'E':
            ch = '3';
            break;
        case 'I':
            ch = '1';
            break;
        case 'O':
            ch = '0';
            break;
        case 'S':
            ch = '5';
            break;
        }

        printf("%c", ch);
        i++;
    }

    for (int i = 10; i > 0; i--) {
        putchar('!');
    }

    return 0;
}
