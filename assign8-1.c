#include <stdio.h>
//�Է¹��� ���� �߿� 'e'�� �ִ����� Ȯ���Ͽ� ������ "yes"��, ������ "no"�� ����ϴ� ���α׷�
//������ �������� 'e'�� �߰������� ����
//'e'�� ã�� ã�� ��ġ�� �������̸� "no"��� ����ϰ� �׷��� ������ "yes"��� ���
int main() {
	int i;
	int count = 0;
	char str[100];
	printf("Enter input sentence.\n");
	for (i = 0; ; i++) {
		scanf("%c", &str[i]);
		count++;
		if (str[i] == '\n') {
			str[i] = 'e';
			break;
		}
	}
	for (i = 0; i < count; i++) {
		if (str[i] == 'e') {
			if (i == count - 1) {
				printf("no");
				break;
			}
			else {
				printf("yes");
				break;
			}
		}
	}
	return 0;
}