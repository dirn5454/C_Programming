#include<stdio.h>

int main()
{
	double r = 10.0;
	double pi = 3.141592;
	double L = 2 * pi*r;
	double A = r * r*pi;
	double V = 4.0 / 3.0 * pi * r*r*r;
	
	printf("�������� �Է��ϼ���");
	scanf_s("%lf", &r);
	printf("�ѷ�=%7.2lf\n", L);
	printf("����=%7.2lf\n", A);
	printf("����=%7.2lf\n", V);
	return 0;
}