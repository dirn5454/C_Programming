#include<stdio.h>
//재귀함수와 포인터를 이용하여 n팩토리얼을 출력하는 프로그램
void findFactorial(int, int *);
int main() {
	int i, result, n;
	result = 1;
	printf("Enter a number: \n");
	scanf("%d", &n);

	findFactorial(n, &result);
	printf("Factorial of %d is: %d", n, result);

	return 0;
}
//n팩토리얼 값을 출력하는 함수
void findFactorial(int n, int *result) {

	if (n >= 1) {
		*result = *result*n;
		findFactorial(n - 1, result);
	}
}