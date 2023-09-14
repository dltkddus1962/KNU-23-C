#include <stdio.h>

int main(void)
{
	int year;
	printf("년도를 입력하십시오: ");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("윤년.");
	else
		printf("윤년 아님.");
	return 0;
}