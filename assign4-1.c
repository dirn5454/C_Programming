#include <stdio.h>
/* �� ���α׷��� Ű�� �����Ը� �Է����� �� ü���� ������
���ϰ� �� ü���� ������ 18.5�̸��̸� ��ü������,
18.5�̻� 25.0�̸��̸� ����ü��,25.0�̻��̸� ��ü������
��Ÿ���ִ� ���α׷��̴�. */

/* estimate�Լ��� BMI�Լ����� ü���� ������ �޾Ƽ�
ü���� ������ ��ü������ ����ü������ ��ü��������
�Ǵ����ִ� �Լ���. */
void estimate(int x){
	if (x < 18.5) {
		printf("��ü���Դϴ�.");
	}
	else if (25.0 <= x){
		printf("��ü���Դϴ�.");
	}
	else{
		printf("����ü���Դϴ�.");
	}
	return;
   
}
//BMI�Լ��� Ű�� ü���� ���� �޾Ƽ� ü���������� ����ϴ� �Լ�
double BMI(int a, int b) {
	double result;
	result = a / (b / 100.0 * b / 100.0);
	estimate(result);
	return result;
}
// �����Լ��� Ű�� ü���� ���� scanf�Լ��� �Է¹ް� �װ�� ü���������� �Ǵܰ��� ����Ѵ�.
int main() {
	double w, h;
	printf("Enter weight and height.\n");
	scanf("%lf %lf", &w, &h);
	BMI(w, h);
	return 0;
}