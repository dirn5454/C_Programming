#include <stdio.h>
/*�� ���α׷��� Ȧ�� n�� �Է¹޾����� ���� �ٸ� �������� ����� 
�̾ ��½�Ű�� ���α׷��̴�*/

//Ȧ�� n�� �Է¹����� 1������ n������ ���ٿ� *�� ������ ����ϴ� �Լ��̴�.
int x(int n) {
	int i, j;
	for (i = 1; i <(n+1); i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//Ȧ�� n�� �Է¹����� n������ 1������ ���ٿ� *�� ������ ����ϴ� �Լ�.
int y(int n) {
	int i, j;
	for (i = 1; i < (n + 1); i++) {
		for (j = (n + 1); j> i; j--) {
			printf("*");
		
		}
		printf("\n");
	}
	return 0;
}


//Ȧ�� n�� �Է� ������ n������ 1������ �� Ȧ���� �ش��ϴ� ������ ���ٿ� ����ϴ� �Լ�.
int z(int n) {
	int i, j;
	for (i = 1; i <(n + 1); i = i + 2) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



int main() {
	int num;
	printf("�����Է�:");
	scanf("%d", &num);
	x(num);
	y(num);
	z(num);
	return 0;
}