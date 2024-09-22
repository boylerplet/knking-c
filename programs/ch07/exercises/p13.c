/* Name: p13.c
 * Author: Amrut Wali
 * Description: Count average of words in a sentence
 */

#include <stdio.h>

int main(void)
{
    int acc, letters;
    float total;
    char ch = '\0';

    printf("Enter a sentence: ");

    // This is a sentnece
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') { acc++; continue; };
	letters++;
    }

    total = (float) letters / (float) acc;

    printf("The average word length: %.2f\n", total);

    return 0;
}
