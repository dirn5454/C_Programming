#include <stdio.h>
int main()
{
	double wei;
	double hei;
	double standard_wei;
	double wei_diff;
	double lb, feet;
	printf("Ű(cm)�� �Է��ϼ���.\n");
	scanf_s("%lf", &hei);
	printf("������(kg)�� �Է��ϼ���.\n");
	scanf_s("%lf", &wei);

	standard_wei = (hei - 100)*0.9;
	wei_diff = wei - standard_wei;
	feet = 175.7 / 30.48;
	lb = 75.0*2.20459;

	printf("����� Ű�� %.1fcm (%.1lffeet)�Դϴ�.\n", hei, feet);
	printf("����� ü���� %.1fkg (%.1lflb)�Դϴ�.\n", wei, lb);
	printf("ǥ�� ü�� %.1lf���� ���̴� %+.1lfkg�Դϴ�.", standard_wei, wei_diff);

	return 0;
}