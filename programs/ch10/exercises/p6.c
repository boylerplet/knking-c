/* Name: p6.c
 * Author: Amrut Wali
 * Description: Reverse Polish Notation
 */

// +, -, *, /, =, where = shows the top item in the stack

#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

void print_stack(void)
{
    printf("Stack: |");
    for (int i = 0; i <= top; i++) {
        printf(" %d |", contents[i]);
    }
    printf("\n");
}

int main(void)
{
    int x, y, result;
    int term;
    char ch;

    printf("Enter RPN expression: ");

    // Read expression and calculate value
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0': push(ch - '0'); break;
            case '+':
                y = pop();
                x = pop();
                term = x + y;
                push(term);
                break;
            case '-':
                y = pop();
                x = pop();
                push(x - y);
                break;
            case '*':
                y = pop();
                x = pop();
                push(x * y);
                break;
            case '/':
                y = pop();
                x = pop();
                push(x / y);
                break;
            case '=':
                result = pop();
                break;
            case ' ': continue;
            default:  printf("Wrong expression\n"); break;
        }
    };

    printf("The value of the expression is: %d", result);

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Stack Overflow!!!\n");
}

void stack_underflow()
{
    printf("Stack Overflow!!!\n");
}
