#include <stdio.h>
//����Լ��� �̿��Ͽ� �ϳ���Ÿ�������� �ذ��ϴ� ���α׷�


//���ȣ���� ���̽����̽�
void move(int n, char x, char y, char z) {
	if (n == 1) {
		printf("move a disk from %c to %c .\n", x, y);
	}
	else {
		move(n - 1, x, z, y);
		printf("move a disk from %c to %c .\n", x, y );
		move(n - 1, z, y, x);
	}
}

int main() {
	int n;
	printf("Enter the number n.\n");
	scanf("%d", &n);
	move(n, 'x', 'y', 'z');
	return 0;
	
}