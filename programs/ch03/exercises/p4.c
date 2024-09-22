/* Name: p4.c
*  Author: Amrut Wali
*  Description: Telephone format converter
*/


#include <stdio.h>

int main(void)
{
    int code, first, second;

    printf("Enter number in format [ (xxx) xxx-xxxx ]: ");
    scanf("(%d) %d-%d", &code, &first, &second);

    printf("Formatted number is: %3d.%3d.%3d\n", code, first, second);

    return  0;
}
