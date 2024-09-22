/* A program to deal a deck of cards */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_RANKS][NUM_SUITS] = {false};

    int num_cards, rank, suit;
    char suits[NUM_SUITS] = {'s', 'd', 'c', 'h'};
    char ranks[NUM_RANKS] = {'2', '3',  '4', '5', '6', '7', '8',
                             '9', 't', 'k', 'q', 'j', 'a'};

    printf("Enter a number: ");
    scanf("%d", &num_cards);

    srand((unsigned)time(NULL));

    printf("Deck: ");
    while (num_cards > 0) {
        rank = rand() % NUM_RANKS;
        suit = rand() % NUM_SUITS;

        if (in_hand[rank][suit] == true) {
            continue;
        }

        in_hand[rank][suit] = true;
        printf("%c%c ", ranks[rank], suits[suit]);
        num_cards--;
    }

    printf("\n");

    return 0;
}
