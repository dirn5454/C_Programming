#include <stdio.h>
//두 개의 단어로 구성된 두 개의 문장을 입력받아 서로 간에 가능한 모든 문자열의 조합하여 출력하는 프로그램

//문자열 내부의 특정 문자열을 다른 문자열로 대체하는 함수
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