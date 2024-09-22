/* Name: p15.c
 * Author: Amrut Wali
 * Description: Anagram
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char ch = 0;
    int frequency[26] = {0}, i = 0;

    printf("Enter first word: ");
    while (ch != '\n') {
        ch = getchar();
        if (isalpha(ch)) {
            frequency[tolower(ch) - 'a']++;
        }
    }
    i = 0;
    ch = 0;

    /*while (i < 26) {*/
    /*    printf("%d ", frequency[i]);*/
    /*    i++;*/
    /*}*/

    printf("\nEnter second word: ");
    while (ch != '\n') {
        ch = getchar();
        if (isalpha(ch)) {
            frequency[tolower(ch) - 'a']--;
        }
    }
    i = 0;

    /*while (i < 26) {*/
    /*    printf("%d ", frequency[i]);*/
    /*    i++;*/
    /*}*/
    
    i = 0;
    while (i < 26) {
        if (frequency[i] != 0) {
            printf("\nNot an anagram\n");
            return 0;
        }
        i++;
    }
    printf("\nWords are anagram\n");

    return 0;
}
