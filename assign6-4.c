#include <stdio.h>
/*�⵵�� ���� �Է¹޾� �ش� �Аl �޷��� ��� ���α׷��� �� ������ 2���� 29�� �����̸� ���ش� 366���̴�*/
int main() {
	int i, yun = 0;
	int year, month;
	int day, day1 = 0, day2 = 0, count = 0;
	int month_day[12] = { 30,28,31,30,31,30,31,31,30,31,30,31 };

	printf("read year and month.\n");
	scanf("%d %d", &year, &month);

	for (i = 0; i < year; i++) {
		if (i % 4 == 0 && i % 100 != 0) {
			count++;
		}
		else if (i % 400 == 0) {
			count++;
		}
	}
	/*�Է¹��� �⵵�� ���� �⵵������ �ϼ�*/
	day1 = 365 * (year - 1) + count;

	/*�Է³⵵ 1�� 1��1���� �Է��� ���� 1�ϱ��� �ϼ��� ���ϴ� ����*/
	for (i = 0; i < month - 1; i++) {
		day2 += month_day[i];
	}
	day2 += 1;
    //�����϶�
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		yun = 1;
		if (month >= 3) {
			day2 += 1;
		}
	}
	//������ �ƴҶ�
	else {
		yun = 0;
		day2 = day2;
	}
	// �Է��� �⵵�� �����⵵������ �ϼ��� �Է��� �⵵�� �Է��� ���� 1�ϱ����� ��
	day = day1 + day2;

	printf("\n");
	printf("\t  %d�� %d�� \n", year, month);
	printf("  ��  ��  ȭ  ��  ��  ��  ��\n");
	//���ۿ��Ͽ� ���缭 �����ϴ� ����
	for (i = 0; i < day % 7; i++) {
		printf("    ");
	}
	int cut = (day % 7);
	if (yun == 1 && month == 2) {
		for (i = 1; i <= 29; i++) {
			cut++;
			printf("%4d", i);
			if (cut % 7 == 0)
				printf("\n");
		}
	}
	else {
		for (i = 1; i <= month_day[month - 1]; i++) {
			cut++;
			printf("%4d", i);
			if (cut % 7 == 0)
				printf("\n");
		}
	}
	return 0;
}