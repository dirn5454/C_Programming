#include <stdio.h>
//�ڿ���n�� �Է¹޾Ƽ� ȭ�鿡 n���� ���� ����ϴ� ���α׷�

//����Լ��� �̿��Ͽ� �Է¹��� n���� ���� ���
int star(int n) {
	int i;
	if (n > 0) {
		printf("*");
		n = star(n - 1);
	}
	else {
		return;
	}
}
int main() {
	int n, i;
	scanf("%d", &n);
	star(n);
	return 0;
	
}