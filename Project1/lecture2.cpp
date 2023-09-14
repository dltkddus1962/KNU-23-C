#include <stdio.h>

int main(void)
{
	char c;
	char s[10];

	printf("문자입력:");
	scanf_s("%c", &c, sizeof(c));
	printf("문자열입력: ");
	scanf_s("%s", s, sizeof(s));

	printf("입력한 문자출력%c\n", c);
	printf("입력한 문자열출력%s", s);
	return 0;
}