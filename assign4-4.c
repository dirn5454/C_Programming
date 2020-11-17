#include <stdio.h>
/*이 프로그램은 1을 입력받으면 정수연산을 하는 첫번째 4칙계산기가 나와 정수연산한 값을 출력하고
2를 입력받으면 부동소수연산을 하는 4칙계산기가 나와 부동 소수 연산을 한 값이 출력되는 프로그램이다.1*/


int main() {
	int num;
	char c;
	printf("Enter 1 for integer calculation, 2 for floatng point calculation. \n");
	scanf("%d", &num);
//1을 입력받았을때 정수연산을 하는 구문
	if (num == 1) {
		int a, b, result;
		printf("Enter an expression, 2+5.\n");
		scanf("%d %c %d", &a, &c, &b);

		if (c == '+')
			result = a + b;
		else if (c == '-')
			result = a - b;
		else if (c == '*')
			result = a * b;
		else if (c == '/')
			result = a / b;
		else {
			printf("잘못된 연산자입니다.");
		}
		printf("It is %d.", result);
		return 0;
	}
	//2를 입력받았을때 부동소수연산을 하는 구문
	else {
		double d, f, result;
		printf("Enter an expression, 2.0+5.0.\n");
		scanf("%lf %c %lf", &d, &c, &f);

		if (c == '+')
			result = d + f;
		else if (c == '-')
			result = d - f;
		else if (c == '*')
			result = d * f;
		else if (c == '/')
			result = d / f;
		else {
			printf("잘못된 연산자입니다.");
		}
		printf("It is %.3lf.", result);
		return 0;
	}
	return 0;


}