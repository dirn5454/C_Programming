#include <stdio.h>
// a,b�� �Է¹޾Ƽ� a��b���� ����ϴ� ���α׷�

//����Լ��� �̿��Ͽ� a��b���� ���
int power(int a, int b) {
	if (b == 1) {
		return a;
	}
	else {
		return (a * power(a, b - 1));

	}
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",power(a, b));
	return 0;
}