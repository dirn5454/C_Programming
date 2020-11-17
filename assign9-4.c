#include<stdio.h>
/*두개의 문자열을 받아 참조호출에 의해 서로 swap하여 출력하는 프로그램
단 반드시 포인터 산술연산을 사용*/


//포인터산술연산을 통한 두개의 문자열을 swap하는 함수
//배열크기를 100으로 지정
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