#include <stdio.h>

int main(void)
{
	int v1, a, b;
	printf("a=b, b=15¿œ∂ß\n");
	a = 10;
	b = 15;
	v1 = ++a + b--;
	printf("1. v1 - a++ + b-- = %d, a=%d, b=%d", v1, a, b);
	return 0;
}