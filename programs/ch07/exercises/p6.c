/* Name: p6.c
 * Author: Amrut Wali
 * Description: print sizes of datatypes
 */

#include <stdio.h>

int main(void)
{
    printf("Int: \t\t%lu\n", sizeof(int));
    printf("Short: \t\t%lu\n", sizeof(short));
    printf("Long: \t\t%lu\n", sizeof(long));
    printf("Float: \t\t%lu\n", sizeof(float));
    printf("Double: \t%lu\n", sizeof(double));
    printf("Long Double: \t%lu\n", sizeof(long double));

    return 0;
}
