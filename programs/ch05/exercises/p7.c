/* Name: p7.c
 * Author: Amrut Wali
 * Description: Max and Min
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, greatest, smallest;

    printf("Enter any 4 numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    greatest = smallest = n1;

    if (n2 > greatest) {
        greatest = n2;
    }
    if (n2 < smallest) {
        smallest = n2;
    }
    if (n3 > greatest) {
        greatest = n3;
    }
    if (n3 < smallest) {
        smallest = n3;
    }
    if (n4 > greatest) {
        greatest = n4;
    }
    if (n4 < smallest) {
        smallest = n4;
    }


    printf("The greatest number: %d\nThe smallest number: %d\n", greatest,
           smallest);

    return 0;
}
