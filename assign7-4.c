#include <stdio.h>
//5���� ������ �Է¹޾� �� �հ踦 ����ϴ� ���α׷�
//�迭�̿�
int str[5];
//n���� �Է¹ް� ����Լ��� ���Ͽ� �հ踦 ���
int sum(int n){
	if (n==0) {
		return str[0];
	}
	else {
		return str[n] + sum(n - 1);
	}
}

int main() {
	int n;
	for (n = 0; n < 5; n++) {
		scanf("%d", &str[n]);
	}
	printf("%d",sum(n));
	return 0;
}