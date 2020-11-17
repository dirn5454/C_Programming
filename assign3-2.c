#include <stdio.h>
#include <math.h>

int round_up(double x)
{
	double num1;
	num1 = floor(x + 0.5);
	return num1;
}

int main(void)
{
	double a;
	printf("Enter a real numbers.\n");
	scanf("%lf", &a);
	printf("Result of round up is %d\n", round_up(a));
	double b;
	printf("Enter a real number.\n");
	scanf("%lf", &b);
	printf("Result of round up is %d\n", round_up(b));
	return 0;
}