#include <stdio.h>
/*�� ���α׷��� 1�� �Է¹����� ���������� �ϴ� ù��° 4Ģ���Ⱑ ���� ���������� ���� ����ϰ�
2�� �Է¹����� �ε��Ҽ������� �ϴ� 4Ģ���Ⱑ ���� �ε� �Ҽ� ������ �� ���� ��µǴ� ���α׷��̴�.1*/


int main() {
	int num;
	char c;
	printf("Enter 1 for integer calculation, 2 for floatng point calculation. \n");
	scanf("%d", &num);
//1�� �Է¹޾����� ���������� �ϴ� ����
	if (num == 1) {
		int a, b, result;
		printf("Enter an expression, 2+5.\n");
		scanf("%d %c %d", &a, &c, &b);

		if (c == '+')
			result = a + b;
		else if (c == '-')
			result = a - b;
		else if (c == '*')
			result = a * b;
		else if (c == '/')
			result = a / b;
		else {
			printf("�߸��� �������Դϴ�.");
		}
		printf("It is %d.", result);
		return 0;
	}
	//2�� �Է¹޾����� �ε��Ҽ������� �ϴ� ����
	else {
		double d, f, result;
		printf("Enter an expression, 2.0+5.0.\n");
		scanf("%lf %c %lf", &d, &c, &f);

		if (c == '+')
			result = d + f;
		else if (c == '-')
			result = d - f;
		else if (c == '*')
			result = d * f;
		else if (c == '/')
			result = d / f;
		else {
			printf("�߸��� �������Դϴ�.");
		}
		printf("It is %.3lf.", result);
		return 0;
	}
	return 0;


}