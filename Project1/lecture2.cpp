#include <stdio.h>

int main(void)
{
	char c;
	char s[10];

	printf("�����Է�:");
	scanf_s("%c", &c, sizeof(c));
	printf("���ڿ��Է�: ");
	scanf_s("%s", s, sizeof(s));

	printf("�Է��� �������%c\n", c);
	printf("�Է��� ���ڿ����%s", s);
	return 0;
}