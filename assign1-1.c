#include <stdio.h>
int main()
{
	double width, height;
	double area;

	width = 50;
	height = 60;
	area = width * height / 2;

	printf("밑변 %lfcm,높이 %lfcm인 직각삼각형의 넓이= %lf㎠ \n", width, height, area);
	return 0;
}