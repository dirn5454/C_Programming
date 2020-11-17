#include<stdio.h>

int main()
{
	double r = 10.0;
	double pi = 3.141592;
	double L = 2 * pi*r;
	double A = r * r*pi;
	double V = 4.0 / 3.0 * pi * r*r*r;
	
	printf("반지름을 입력하세요");
	scanf_s("%lf", &r);
	printf("둘레=%7.2lf\n", L);
	printf("면적=%7.2lf\n", A);
	printf("부피=%7.2lf\n", V);
	return 0;
}