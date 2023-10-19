#include <stdio.h>
int main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "data.txt", "wt");

	fprintf(fp, "%d %d %d\n", 100)
}