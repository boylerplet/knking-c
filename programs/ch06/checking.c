/* Balance a checkbook */

#include <stdio.h>

int main(void)
{
    int choice;
    float amount, balance = 0.00f;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");

    while (1) {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 0: // clear
            balance = 0.00f;
            break;
        case 1: // credit
            printf("Enter amount to credit: ");
            scanf("%f", &amount);
            balance += amount;
            break;
        case 2: // debit
            printf("Enter amount to debit: ");
            scanf("%f", &amount);
            balance -= amount;
            break;
        case 3:
            printf("Current balance: %.2f\n", balance);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!!! Please select a valid option\n");
            break;
        }
    }
}
