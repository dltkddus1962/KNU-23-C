#include<stdio.h>
int fact(int num)
{
	if (num == 0) return 1;

	return num * fact(num - 1);
}
int main()
{
	int num;
	printf("����� ���丮�� �� �Է�:");
	scanf_s("%d", &num);
	printf("%d", fact(num));
}