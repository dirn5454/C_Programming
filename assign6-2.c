#include <stdio.h>
#include <math.h>
//ax*x + bx + c = 0�� �����Ŀ��� a, b, c�� �Է¹޾Ƽ� ���� ����ϴ� ���α׷� �� a,b�� ���ÿ� 0�� �������ʴ´ٰ� ����
int main() {
	int a, b, c;
	
	printf("Enter a b c\n");
	scanf("%d %d %d", &a, &b, &c);
	int d;
	int e;
	//a�� 0�϶� ������������ �ط� ���ϴ� ����
	if (a == 0) { 
		printf("The roots are %d",-c/b );
	}
	else {
		//a��
		//���ǰ���
		d = b * b - 4*a*c;
		if (d > 0) {
			//�������� ���ϴ� �Լ�
			e = sqrt(d);
			printf("The roots are %d %d", (-b + e) / (2*a), (-b - e) / (2*a));
		}
		else if (d == 0) {
			printf("The roots are %d %d", (-b) / (2*a), (-b) / (2 * a));
		}
		else {
			printf("The roots are ���");
		}
	}
	return 0;
}