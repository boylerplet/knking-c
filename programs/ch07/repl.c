#include <stdio.h>

int main(void)
{
	char ch = 0;

	while (ch != '0') {
		ch = getchar();
		putchar(ch);
	}

	return 0;
}
