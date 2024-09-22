/* Name: p1.c
 * Author: Amrut Wali
 * Description: Implement Selection Sort
 */

#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int n = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(a, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {
    int max = 0, max_i = 0, swap = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_i = i;
        }
    }
    // If max is last element
    if (max_i == n - 1) return;

    // If max is in middle swap
    swap = a[n-1];
    a[n-1] = a[max_i];
    a[max_i] = swap;

    // Call recurse
    selection_sort(a, n - 1);
}
