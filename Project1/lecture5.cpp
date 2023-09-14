#include <stdio.h>

int main(void)
{
    int A;
    printf("정수 입력 : ");
    scanf("%d", &A);

    if (A % 2 == 0)
        printf("입력한 %d는 짝수.", A);
    else
        printf("입력한 %d는 홀수.", A);
}