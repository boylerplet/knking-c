/* Implement quicksort Algorithm */

/** 
 * Enter 10 numbers to be sorted: 9 16 47 82 4 66 12 3 25 51
 * 3 16 47 82  4 66 12  3 25 51
 * 3 16 47 82  4 66 12 16 25 51
 * 3  4 47 82  4 66 12 16 25 51
 * 3  4 47 82 47 66 12 16 25 51
 * 3  4  9 51 47 66 12 16 25 51
 * 3  4  9 25 47 66 12 16 25 82
 * 3  4  9 25 47 66 12 16 66 82
 * 3  4  9 25 47 16 12 16 66 82
 * 3  4  9 12 47 16 12 51 66 82
 * 3  4  9 12 47 16 47 51 66 82
 * 3  4  9 12 16 16 47 51 66 82
 * In sorted order: 3 4 9 12 16 25 47 51 66 82
 */

#include <stdio.h>
#define LENGTH 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);
void print_array(int a[], int N);

int main(void)
{
    int a[LENGTH], i;
    printf("Enter %d numbers to be sorted: ", LENGTH);
    for (i = 0; i < LENGTH; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, LENGTH - 1);

    printf("In sorted order: ");
    for (i = 0; i < LENGTH; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high)
{
    int middle;

    if (low >= high)
        return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
    int part_element = a[low];

    for (;;) {
        while (low < high && part_element <= a[high])
            high--;
        if (low >= high)
            break;
        a[low++] = a[high];
        print_array(a, LENGTH);

        while (low < high && a[low] <= part_element)
            low++;
        if (low >= high)
            break;
        a[high--] = a[low];
        print_array(a, LENGTH);
    }
    a[high] = part_element;
    return high;
}

void print_array(int a[], int N)
{
    for (int i = 0; i < N; i++) {
        printf("%2d ", a[i]);
    }
    printf("\n");
}
