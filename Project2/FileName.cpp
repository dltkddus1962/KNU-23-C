#include <stdio.h>

int main()
{
	int isprime(int thtn)
	{
		for (int div = thtn - 1; div > 1; div--)
		{
			if(thtn%div==0)
		}
		return 1;
	}
	int thtn;

	printf("소수인지 확인할 수를 입력하세요:");

	scanf("%d", &thtn);
	printf('%d', &isprime(thtn));

}