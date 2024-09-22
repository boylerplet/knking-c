/* Name: p8.c
 * Author: Amrut Wali
 * Description: Game of carp dice
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Two dice
// sum = 7 || 11 - first roll - WIN
// sum = 2 || 3 || 12 - first roll - LOOSE
// sum = <any rther roll> - point
// <roll point> - WIN
// <roll 7> - LOSS
// <roll other> - continue
//

bool play_game(void);
int roll_dice(void);

void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main(void)
{
    int win = 0, loss = 0, exit_code = 0;
    char status = 0;

    srand((unsigned)time(NULL));

    printf("[0] WHILE START : main\n");
    while (1) {
        exit_code = play_game();
        if (exit_code == 1)
            win++;
        else
            loss++;

        printf("\nGame finished! Do you want to play again? ");
        /*scanf("%c", &status);*/
        status = getchar();
        printf("[0] STATUS : %c\n", status);

        if (status == 'Y' || status == 'y') {
            status = 0;
            printf("[0] WHILE CONTINUE : main\n");
            clear_input_buffer();
            continue;
        } else {
            printf("[0] WHILE BREAK : main\n");
            clear_input_buffer();
            break;
        }
        printf("[0] WHILE END : main\n");
    }

    printf("\nWins: %d\tLosses: %d\n", win, loss);
    return 0;
}

bool play_game()
{
    int first_play = 0, point = 0, current = 0;

    current = roll_dice();
    printf("You rolled: %d\n", current);
    switch (current) {
    case 7:
    case 11: goto win;
    case 2:
    case 3:
    case 12: goto loss;
    default: {
        point = current;
        printf("Your point: %d\n", point);
    }
    }

    printf("[0] WHILE START : play_game\n");
    while (1) {
        current = roll_dice();
        printf("You rolled: %d\n", current);

        if (current == 7) {
            printf("[0] WHILE END : play_game\n");
            goto loss;
        } else if (current == point) {
            printf("[0] WHILE END : play_game\n");
            goto win;
        } else
            continue;
    }

loss:
    printf("You Lose!\n");
    return false;

win:
    printf("You Win!\n");
    return true;
}

int roll_dice(void)
{
    int dice1 = 0, dice2 = 0;

    dice1 = rand() % 6;
    printf("[0] ROLL DICE : 1 - %d\n", dice1);
    dice2 = rand() % 6;
    printf("[0] ROLL DICE : 2 - %d\n", dice2);

    return dice1 + dice2;
}
