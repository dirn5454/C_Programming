#include<stdio.h>
//����Լ��� �����͸� �̿��Ͽ� n���丮���� ����ϴ� ���α׷�
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
//n���丮�� ���� ����ϴ� �Լ�
void findFactorial(int n, int *result) {

	if (n >= 1) {
		*result = *result*n;
		findFactorial(n - 1, result);
	}
}