#include <stdio.h>
//�� ���� �ܾ�� ������ �� ���� ������ �Է¹޾� ���� ���� ������ ��� ���ڿ��� �����Ͽ� ����ϴ� ���α׷�

//���ڿ� ������ Ư�� ���ڿ��� �ٸ� ���ڿ��� ��ü�ϴ� �Լ�
void combination(char* str1, char* str2) {

	int str1_length = strlen(str1);
	int str2_length = strlen(str2);
	char *p1[2], *p2[2];

	p1[0] = str1;
	for (int i = 0; i < str1_length; i++) {

		if (str1[i] == 32) {
			str1[i] = '\0';
			p1[1] = &str1[i + 1];
		}
	}

	p2[0] = str2;
	for (int i = 0; i < str2_length; i++) {

		if (str2[i] == 32) {
			str2[i] = '\0';
			p2[1] = &str2[i + 1];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%s %s  ", p1[i], p2[j]);
		}
	}

}
int main() {
	char str1[100], str2[100];
	printf("Enter first text.\n");
	gets(str1);
	printf("Enter second text.\n");
	gets(str2);
	combination(str1, str2);

	return 0;
}