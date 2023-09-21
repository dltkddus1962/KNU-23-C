#include <stdio.h>
double sum(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);
void calculator(int selector);

int main()
{
	
	
	int a;

	printf("더하기 빼기 곱하기 나누기:");

	scanf_s("%d", &a);

	calculator(a);
}
void calculator(int selector)
{
	double num1, num2;
	printf("num1:");
	scnaf_s("%lf", &num1);
	printf("num2:");
	scnaf_s("%lf", &num2);

	double res;
	if (selector == 1) sum(num, num2);
	else if (selector == 2) sub(num, num2);
	else if (selector == 3) mul(num, num2);
	else if (selector == 4) div(num, num2);
	printf("Result = %lf\n", res);
	}
}
void sum(double num1, double num2)
