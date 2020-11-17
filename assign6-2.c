#include <stdio.h>
#include <math.h>
//ax*x + bx + c = 0인 방정식에서 a, b, c를 입력받아서 근을 출력하는 프로그램 단 a,b가 동시에 0이 들어오지않는다고 가정
int main() {
	int a, b, c;
	
	printf("Enter a b c\n");
	scanf("%d %d %d", &a, &b, &c);
	int d;
	int e;
	//a가 0일때 일차방정식의 해룰 구하는 구문
	if (a == 0) { 
		printf("The roots are %d",-c/b );
	}
	else {
		//a와
		//근의공식
		d = b * b - 4*a*c;
		if (d > 0) {
			//제곱근을 구하는 함수
			e = sqrt(d);
			printf("The roots are %d %d", (-b + e) / (2*a), (-b - e) / (2*a));
		}
		else if (d == 0) {
			printf("The roots are %d %d", (-b) / (2*a), (-b) / (2 * a));
		}
		else {
			printf("The roots are 허근");
		}
	}
	return 0;
}