#include <stdio.h>

int main()
{
	int i, j;

	i = 2;
	j = 1;

	while (i <= 9)
	{
		if (1 == 5) {
			i++;
			continue;
		}
		printf("%d * %d = %d\n", i, j, i * j);
		j++;
	}
	i++;
	j = 1;
}