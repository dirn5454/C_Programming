#include <stdio.h> 
//�� ���α׷��� �Է��� �ڿ����� �ڸ����� �ݴ�� ����ϴ� ���α׷��̴�*/

/*rverse�Լ��� �Է¹��� �ڿ����� �ڸ����� �ݴ�� ����ϰ�
�Է¹��� �ڿ����� ��ȣ�� ���̳ʽ��̸� ���α׷������� �Լ��̴�.*/
int reverse_it(int num) {
	
	for (; num > 0;){
		for (; num > 0; num = num / 10) {
			if (num % 10 != 0) {
				printf("%d", num % 10);
			}
		}
		printf(".\n");
		printf("Enter an integer.\n");
		scanf("%d", &num);
	}
	return 0;
}
//�����Լ��� ���� �Է¹ް� reverse�Լ����� �������� ����ϴ� �Լ��̴�.
int main() {
	int num;
	printf("Enter an integer.\n");
	scanf("%d", &num);
	reverse_it(num);
	return 0;

}