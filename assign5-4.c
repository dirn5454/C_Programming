#include <stdio.h>
/*�� ���α׷��� ���� a,b�� �Է¹ް�  a�� b������ ��ŭ��
���� ����ϴ� ���α׷��̴�*/

/*power �Լ��� ���޹��� �Ű����� a,b�� a��b������ ����
����ϴ� ���α׷��̴�. */
int power(int a, int b) {
	
	int i;
	int c = 1;
	for (i = 1; i <= b; i++) {
		c = c * a;
	}
	return c;
}

int main() {
	
	int a, b;
	printf("Enter base and power.\n");
	scanf("%d %d", &a, &b);

	printf("%d to the %d is %d", a, b, power(a, b));
	return 0;
}