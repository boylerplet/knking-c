/* Name: p10.c
 * Author: Amrut Wali
 * Description: Count vowels in a sentence
 */

#include <stdio.h>
#include <ctype.h>

int main(void) 
{ 
    int count = 0;
    char ch = '\0';

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
	switch (toupper(ch)) {
	    case 'A':
	    case 'E':
	    case 'I':
	    case 'O':
	    case 'U': count++; break;
	    default: break;
	}
    }

    printf("The sentence has %d vowels\n", count);

    return 0; 
}
