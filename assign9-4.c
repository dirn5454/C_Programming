#include<stdio.h>
/*�ΰ��� ���ڿ��� �޾� ����ȣ�⿡ ���� ���� swap�Ͽ� ����ϴ� ���α׷�
�� �ݵ�� ������ ��������� ���*/


//�����ͻ�������� ���� �ΰ��� ���ڿ��� swap�ϴ� �Լ�
//�迭ũ�⸦ 100���� ����
void swap(char * str1, char * str2) {
	char temp[100];
	for (int i = 0; i < 100; i++) {
		*temp = *str1;
		*str1 = *str2;
		*str2 = *temp;

		str1++;
		str2++;
	}
}
int main() {
	char str1[100];
	char str2[100];
	printf("Enter two strings.\n");

	scanf("%s %s", &str1, &str2);
	printf("str1 is %s str2 is %s \n", str1, str2);
	swap(str1, str2);
	printf("str1 is %s str2 is %s \n", str1, str2);
	return 0;
}