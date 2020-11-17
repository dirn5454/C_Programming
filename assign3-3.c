#include <stdio.h>


double calc_average(double a, double b, double c)
{
	double aver;
	aver = (a + b + c) / 3;
	return aver;
}

double calc_variance(double a, double b, double c)
{

	double aver = calc_average(a,b,c);
	double x;
	x = ((a - aver)*(a - aver) + (b - aver)*(b - aver) + (c - aver)*(c - aver)) / 3;
	return x ;
}

int main(void)
{
	double d, e, f;
	printf("Enter a three real numbers.\n");
	scanf("%lf%lf%lf", &d, &e, &f);
	printf("The variance is %lf", calc_variance(d, e, f));
	return 0;


}