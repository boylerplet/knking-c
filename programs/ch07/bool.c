#include <stdio.h>

typedef int Bool;

int main(void)
{
    Bool true = 1;
	size_t value;

	printf("%zu\n%zu\n%zu", sizeof(int), sizeof(long double), sizeof(long long int)); 
}
