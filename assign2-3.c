#include <stdio.h>
int main()
{
	double wei;
	double hei;
	double standard_wei;
	double wei_diff;
	double lb, feet;
	printf("키(cm)를 입력하세요.\n");
	scanf_s("%lf", &hei);
	printf("몸무게(kg)를 입력하세요.\n");
	scanf_s("%lf", &wei);

	standard_wei = (hei - 100)*0.9;
	wei_diff = wei - standard_wei;
	feet = 175.7 / 30.48;
	lb = 75.0*2.20459;

	printf("당신의 키는 %.1fcm (%.1lffeet)입니다.\n", hei, feet);
	printf("당신의 체중은 %.1fkg (%.1lflb)입니다.\n", wei, lb);
	printf("표준 체중 %.1lf과의 차이는 %+.1lfkg입니다.", standard_wei, wei_diff);

	return 0;
}