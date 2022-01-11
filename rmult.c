/*
	https://en.wikipedia.org/wiki/Ancient_Egyptian_multiplication
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool iseven(int val)
{
	return (!(val % 2));
}
size_t rmult(size_t a, size_t b, size_t rem)
{
	printf("%3zu   %3zu", a, b);
	iseven(a) ? printf("\n") : printf(" x\n");

	if(a == 1) return (rem);

	a = floor(a/2);
	b *= 2;

	if(!iseven(a)) rem += b;

	rmult(a, b , rem);
}

int main()
{
	size_t x = 7092,
		   y = 190;

	size_t res = rmult(x, y, 0);
	printf("res = %zu\n", res);

	return (0);
}