#include <stdio.h>
/*�� ���α׷��� 5���� ���ڷ� �̷���� �ܾ �Է¹޾Ƽ�
�� �� ���ڰ� �� �������� ����ϴ� ���α׷�*/

/* is_digit �Լ��� �ƽ�Ű�ڵ带 �̿��Ͽ� i�� 0~9������
�����϶� �� ������ ������� ��Ÿ���� �Լ�.*/
int is_digit(char ch[]) {
	int num = 0;
	for (int i = 0; i < 5; i++) {
		if (ch[i] >= 48 && ch[i] <= 57)
			num++;
	}
	return num;
}

/*�迭�� �̿��Ͽ� �迭�ȿ� �ټ����� ���ڷ� �̷���� �ܾ �Է¹ް�
������ ���ڸ� ��Ÿ���� ������ ����ϴ� �Լ��̴�.*/
int main() {

	char len[100];
	printf("Enter a 5-letter word.\n");
	scanf("%s", &len);
	printf("Digit appers %d times.\n", is_digit(len));
	return 0;
}