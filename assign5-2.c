#include <stdio.h>
/*�� ���α׷��� �� ���ڸ� �Է¹����� �� ���ڰ� 1�̿ܿ��� ������� ���� ���μ�������
�Ǻ��ϰ� ���μҸ� ����y, �׷��������� ����n�� ��ȯ�� ���� ����ϴ� ���α׷��̴�.*/

/*is_prime�Լ��� �� ���ڸ� �Է¹޾Ƽ� �� �� ���ڰ� 1�ܿ��� ������� ���� ���μ�������
�Ǻ��ϴ� �Լ��̴�.*/
char isPrime(int a, int b) {
	
	int i;
	int num=0;
	int m;
	if (a < b) {
		m = a;
	}
	else {
		m = b;
	}
	for (i = 2; i <= m; i++) {
		if (a%i == 0 && b%i == 0) {
			num++;
		}
	}
	if (num==0) {
		return 'y';
	}
	else {
		return 'n';
	}
}
//�����Լ��� �Ǻ��Ȱ��� ���޹޾Ƽ� 'y�̸� ���μ��̴�.','n�̸� ���μҰ� �ƴϴ�.'�� ����ϴ� �Լ��̴�.
int main() {
	int a, b;
	int result;

	printf("Enter two numbers.\n");
	scanf("%d %d", &a, &b);
	result = isPrime(a, b);
	if (result == 'y') {
		printf("They are mutually prime.\n");
	}
	else if(result == 'n') {
		printf("They are not mutually prime.\n");
	}
	return 0;
}