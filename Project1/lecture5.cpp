#include <stdio.h>

int main(void)
{
    int A;
    printf("���� �Է� : ");
    scanf("%d", &A);

    if (A % 2 == 0)
        printf("�Է��� %d�� ¦��.", A);
    else
        printf("�Է��� %d�� Ȧ��.", A);
}