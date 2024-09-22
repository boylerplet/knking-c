/* Print squares of n numbers */

#include <stdio.h>

int main(void)
{
	int i = 1, number;

	printf("Enter a number: ");
	scanf("%d", &number);

	while(i <= number) {
		printf("%d\t%d\n", i, i * i);
		i++;
	}

	return 0;
}
