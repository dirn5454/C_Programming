#include <stdio.h>
// 호르너 규칙을 이용하여 다항식의 계수와 차수를 입력받고 결과를 출력하는 프로그램
double horner(int n, double p[], double x){
	double result = p[0];
	int i;
	for (i = 1; i <= n; i++){
		result = result * x + p[i];
	}
	return result;
}
int main(){
	double p[100];
	int i, n;
	double x;
	printf("Enter order and coefficients.\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++){
		scanf("%lf", &p[i]);
	}
	scanf("%lf", &x);
	printf("The answer is %.3lf", horner(n, p, x));
	return 0;

}