#include <stdio.h>
/*�� ���α׷��� ���������� ��ȣȭ����̸� key���ڰ��� �Է¹ް�
�Է¹��� ������ �ƽ�Ű�ڵ�ǥ���� key����ŭ �ǳʶ� ���ڰ���
����ϴ� ���α׷��̴�.*/
int main() {

	int key;
	char ch;
	printf("Enter the key.\n");
	scanf("%d", &key);
	getchar();
	printf("Enter the text.\n");
	scanf("%c", &ch);
	printf("The cipher text is, ");
	printf("%c", key + ch);
	/*�Է��� ������ ���� ó�� ���ڸ� while�������� ������
	���� ���� ����ϰ� ���������ڵ��� while���ȿ��� ����Ѵ�.*/
	while(1) {
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		printf("%c", key + ch);
	}
	return 0;
}