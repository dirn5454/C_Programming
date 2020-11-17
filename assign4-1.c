#include <stdio.h>
/* 이 프로그램은 키와 몸무게를 입력했을 때 체질량 지수를
구하고 그 체질량 지수가 18.5미만이면 저체중으로,
18.5이상 25.0미만이면 정상체중,25.0이상이면 과체중으로
나타내주는 프로그램이다. */

/* estimate함수는 BMI함수에서 체질량 지수를 받아서
체질량 지수가 과체중인지 정상체중인지 저체중인지를
판단해주는 함수다. */
void estimate(int x){
	if (x < 18.5) {
		printf("저체중입니다.");
	}
	else if (25.0 <= x){
		printf("과체중입니다.");
	}
	else{
		printf("정상체중입니다.");
	}
	return;
   
}
//BMI함수는 키와 체중의 값을 받아서 체질량지수를 계산하는 함수
double BMI(int a, int b) {
	double result;
	result = a / (b / 100.0 * b / 100.0);
	estimate(result);
	return result;
}
// 메인함수는 키와 체중의 값을 scanf함수로 입력받고 그결과 체질량지수의 판단값을 출력한다.
int main() {
	double w, h;
	printf("Enter weight and height.\n");
	scanf("%lf %lf", &w, &h);
	BMI(w, h);
	return 0;
}