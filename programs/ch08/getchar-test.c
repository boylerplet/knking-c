#include <stdio.h>

int main(void)
{
    char sentence[100] = {0}, ch;
    int i = 0;

    while (ch != '.' && ch != '!' && ch != '?') {
        ch = getchar();
        sentence[i] = ch;
        i++;
    }

    printf("\nRead complete!\n");

    for(int i = 0; i < 100;i++ ) {
        putchar(sentence[i]);

    }
}
