/* Calculate the number of digits in an integer */

#include <stdio.h>

int main(void)
{
	int n, digits = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	do {
		n /= 10;
		digits++;
	} while (n > 0);

	printf("The number of digits: %d\n", digits);

	return 0;
}
