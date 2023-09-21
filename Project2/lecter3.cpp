#include<stdio.h>
int fact(int num)
{
	if (num == 0) return 1;

	return num * fact(num - 1);
}
int main()
{
	int num;
	printf("계산할 팩토리얼 값 입력:");
	scanf_s("%d", &num);
	printf("%d", fact(num));
}