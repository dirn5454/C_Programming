#include <stdio.h>
#include <string.h>


//�Է� ���忡�� �˻��� ���� ������ ��� ���ڸ� ����ϴ� ���α׷�

//strchr �Լ��� ������ ������ �����ϴ� my_strchr �Լ�
char *my_strchr(const char *t, int c) {

	while (*t){
		if (*t == c){
			return t+1;
		}
		*t++;
	}
	return NULL;
}


int main() {
	char arr[100];
	char ch;
	char *str;
	printf("Enter thr text.\n");
	gets(arr);
	printf("Enter the character to be searched.\n");
	scanf("%c", &ch);

	str = my_strchr(arr, ch);
	puts(str);
	return 0;
}