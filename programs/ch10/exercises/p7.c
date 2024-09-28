/* Name: p7.c
 * Author: Amrut Wali
 * Description: 7 Segment display
 */

#include <ctype.h>
#include <stdio.h>

#define NUMBER_OF_DIGITS 10
#define SEGMENTS 7
#define MAX_NUMBERS 13

void print_number(int numbers[][*], int i);
void print_numbers(int numbers[][*]);
void update_number(int numbers[MAX_NUMBERS][SEGMENTS], int i, int num);

int digits[NUMBER_OF_DIGITS][SEGMENTS] = {
    {1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}};

int main(void)
{
    int numbers[MAX_NUMBERS][SEGMENTS] = {
        {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}};
    int i = 0;
    char ch;

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (i < 10) {
            if (isdigit(ch)) {
                update_number(numbers, i, ch - '0');
                i++;
            }
        } else {
            break;
        }
    }

    print_numbers(numbers);

    return 0;
}

void update_number(int numbers[MAX_NUMBERS][SEGMENTS], int i, int num)
{
    for (int j = 0; j < SEGMENTS; j++) {
        numbers[i][j] = digits[num][j];
    }
}

void print_number(int numbers[MAX_NUMBERS][SEGMENTS], int i)
{
    printf(" %c \n", numbers[i][0] == 0 ? ' ' : '_');
    printf("%c%c%c\n", numbers[i][5] == 0 ? ' ' : '|',
           numbers[i][6] == 0 ? ' ' : '_', numbers[i][1] == 0 ? ' ' : '|');
    printf("%c%c%c\n", numbers[i][4] == 0 ? ' ' : '|',
           numbers[i][3] == 0 ? ' ' : '_', numbers[i][2] == 0 ? ' ' : '|');
};

void print_numbers(int numbers[MAX_NUMBERS][SEGMENTS])
{
    // print first line
    for (int x = 0; x < MAX_NUMBERS; x++) {
        printf(" %c  ", numbers[x][0] == 0 ? ' ' : '_');
    }
    printf("\n");
    // print second line
    for (int x = 0; x < MAX_NUMBERS; x++) {
        printf("%c%c%c ", numbers[x][5] == 0 ? ' ' : '|',
               numbers[x][6] == 0 ? ' ' : '_', numbers[x][1] == 0 ? ' ' : '|');
    }
    printf("\n");
    // print third line
    for (int x = 0; x < MAX_NUMBERS; x++) {
        printf("%c%c%c ", numbers[x][4] == 0 ? ' ' : '|',
               numbers[x][3] == 0 ? ' ' : '_', numbers[x][2] == 0 ? ' ' : '|');
    }
    printf("\n");
}
