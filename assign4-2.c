#include <stdio.h>
/*�� ���α׷��� �⵵�� �Է¹޾Ƽ� �� �⵵�� �������� �ƴ����� 
�Ǵ��Ͽ� ��Ÿ���ִ� ���α׷��̴�.*/

//leap_year�Լ��� �Է��� �⵵�� �������� �ƴ����� �Ǵ��ϴ� �Լ��̴�.
int leap_year(int y) {

	if ((y % 4 == 0) || (y % 400 == 0) && (y % 100 != 0)){
		return printf("It is a leap year.");
	}
	else {
		return printf("It is a Not leap year");
	}
}
// ������ �⵵�� �Է¹ް� �⵵�� leap_year�Լ����� �Ǵܵ� ���� ����ϴ� �Լ�.
int main() {
	int year;
	printf("Enter the year.\n");
	scanf("%d", &year);
	leap_year(year);
	return 0;
}