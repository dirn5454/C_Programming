#include <stdio.h>
/*�� ���α׷��� �Էµ� ���忡�� ��������� ������������� ����ϴ� ���α׷��̴�.*/

int main() {
	int a=0;
	char ch;
	printf("Enter a sentence.\n");
	/*for���ѷ������� ch������ ���忡�� ������ ��� ���������� �Ǵ��Ͽ� ����ϰ�
	\n�� ������ for���� �����ϰ� ���������� ����Ѵ� */
	for (; ; ) {
		scanf("%c", &ch);
		if (ch == 'e' || ch == 'a' || ch == 'i' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'U') {
			a++;
		}
		else if (ch == '\n') {
			break;
		}
	}
	printf("Vowels appear %d times.", a);
	return 0;
}