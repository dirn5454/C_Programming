#include <stdio.h>
#include <string.h>
/* %s �������� ���ڿ��� �Է¹޾� �迭�� ������ ��, �װ��� �Ųٷ� ����ϴ� ���α׷�*/
//�ѱ��Է��� ��쿡�� ����� ����ؾ���

int main() {
	int len;
	char arr[100];
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = len - 1; i >=0;) {
		if ((*(arr+i) >= 0) && (*(arr + i) <= 127)) {
			printf("%c", *(arr + i));
			i--;
		}
		else {
			printf("%c", *(arr + i-1));
			printf("%c", *(arr + i));
			i -= 2;
		}
	}
	return 0;
}