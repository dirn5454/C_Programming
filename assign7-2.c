#include <stdio.h>
//�ڿ��� N�� �Է¹޾� S = 12 + 22 + ,,, + N2�� ����Ͽ� ����ϴ� ���α׷�

//����Լ��� �̿��Ͽ� S = 12 + 22 + ,,, + N2�� ����Ͽ� ���
int cal(int n) {
	if (n == 1) {
		return (n * 10 + 2);
	}
	else {
		return ((n * 10 + 2) + cal(n - 1));
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", cal(n));
	return 0;

}