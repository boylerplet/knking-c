/* Name: p9.c
 * Author: Amrut Wali
 * Description: Walk through a 10x10 array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define ALPHABETS_LENGTH 26
#define DECISION_SIZE 4

int main(void)
{
    char ground[ARRAY_SIZE][ARRAY_SIZE] = {
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', }, 
        { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', },
    }, ch = 'A';
    int step = 1, decision = 0;
    
    int i = 0, j = 0;

    // Initialize random seed with time
    srand((unsigned) time(NULL));

    // TODO: Walk the array
    ground[i][j] = ch;
    while (step < ALPHABETS_LENGTH) {
        // Do the walk logic here
        // Premature exit in case of dead end
        if (ground[i - 1][j] != '.' &&
            ground[i + 1][j] != '.' &&
            ground[i][j - 1] != '.' &&
            ground[i][j + 1] != '.' 
        ) {
            printf("[1] STOP EXECUTION: Dead End\n");
            break;
        }

        // Four cases: i++ i-- j++ j--
        decision = rand() % DECISION_SIZE;
        // If walk, update letter
        switch(decision) {
            case 0: {
                // i++ : MOVE DOWN
                if (i + 1 < ARRAY_SIZE && ground[i + 1][j] == '.') {
                    i++;
                    ch++;
                    step++;
                    ground[i][j] = ch;

                    printf("[0] WALK DOWN:  ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                    break;
                }
                printf("[1] OUT OF BOUNDS:  ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                continue;
            }
            case 1: {
                // i-- : MOVE UP
                if (i - 1 > 0 && ground[i - 1][j] == '.') {
                    i--;
                    ch++;
                    step++;
                    ground[i][j] = ch;

                    printf("[0] WALK UP:    ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                    break;
                }
                printf("[1] OUT OF BOUNDS:  ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                continue;
            }
            case 2: {
                // j++ : MOVE RIGHT
                if (j + 1 < ARRAY_SIZE && ground[i][j + 1] == '.') {
                    j++;
                    ch++;
                    step++;
                    ground[i][j] = ch;

                    printf("[0] WALK RIGHT: ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                    break;
                }
                printf("[1] OUT OF BOUNDS:  ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                continue;
            }
            case 3: {
                // j-- : MOVE LEFT
                if (j - 1 > 0 && ground[i][j - 1] == '.') {
                    j--;
                    ch++;
                    step++;
                    ground[i][j] = ch;

                    printf("[0] WALK LEFT:  ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                    break;
                }
                printf("[1] OUT OF BOUNDS:  ch = %c; i = %2d; j = %2d; step = %2d\n", ch, i, j, step);
                continue;
            }
        }
    }

    i = 0; j = 0;

    // Print final Array
    printf("\n\n");
    while (i < ARRAY_SIZE) {
        while (j < ARRAY_SIZE) {
            printf("%c ", ground[i][j]);
            j++;
        }
        j = 0;
        printf("\n");
        i++;
    }
}
