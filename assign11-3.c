#include <stdio.h>
#include <string.h>


//입력 문장에서 검색할 문자 이후의 모든 문자를 출력하는 프로그램

//strchr 함수와 동일한 역할을 수행하는 my_strchr 함수
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