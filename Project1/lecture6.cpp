#include <stdio.h>
int main()
{
	int jumsu;
	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);
	if (jumsu > 100 || jumsu < 0)
		printf("�߸��Է�\n");

	else if (jumsu >= 90)
		printf("A ���� �Դϴ�.");

	else if (jumsu >= 80)
		printf("B ���� �Դϴ�.");

	else if (jumsu >= 70)
		printf("C ���� �Դϴ�.");

	else if (jumsu >= 60)
		printf("D ���� �Դϴ�.");

	else if (jumsu < 60)
		printf("F ���� �Դϴ�.");

	return 0;
}