#include<stdio.h>
#include <string.h>
#include<stdlib.h>
/*%s �������� ���ڿ��� �Է¹��� ��,
������ ��� ���꿡 ���� �迭 ������ ����ϵ�
void print_array(char *arr, int length); �Լ��� ����Լ��� ���� ȣ���ϴ� ���α׷�*/

//��͸� �̿��Ͽ� ���̸�ŭ ����ϴ� �Լ�
void print_array(char* arr) {
	if (*arr) {

		printf("%c", *arr);

		print_array(arr + 1);

	}
}

int main() {
	char arr[100];
	scanf("%s", arr);
	print_array(arr);
	system("pause");
	return 0;
}
