#include <stdio.h>
// ȣ���� ��Ģ�� �̿��Ͽ� ���׽��� ����� ������ �Է¹ް� ����� ����ϴ� ���α׷�
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