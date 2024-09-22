/* Name: p5.c
 * Author: Amrut Wali
 * Description: SCRABBLE implementation
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int score = 0;
    char ch = '\0';

    printf("Enter a word: ");
    while (ch != '\n') {
        ch = getchar();

        if (ch >= 'a' && ch <= 'z') {
            ch = toupper(ch);
        }

        switch (ch) {
        case 'A':
        case 'L':
        case 'I':
        case 'E':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            score += 1;
            break;
        case 'D':
        case 'G':
            score += 2;
            break;

        case 'B':
        case 'C':
        case 'M':
        case 'P':
            score += 3;
            break;

        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            score += 4;
            break;

        case 'K':
            score += 5;
            break;

        case 'J':
        case 'X':
            score += 8;
            break;

        case 'Q':
        case 'Z':
            score += 10;
            break;
        }
    }

    printf("%d\n", score);
    return 0;
}
