#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*문자열 내부의 특정 문자열을 다른 문자열로 대체하여 출력하는 프로그램*/


//문자열 내부의 특정 문자열을 다른 문자열로 대체하는 함수
char *replaceWord(const char *s, const char *oldW, const char *newW){
	char *result;
	int i, cnt = 0;
	int newWlen = strlen(newW);
	int oldWlen = strlen(oldW);

	for (i = 0; s[i] != '\0'; i++){
		
		if (strstr(&s[i], oldW) == &s[i]){

			cnt++;

			i += oldWlen - 1;
		}

	}

	if (cnt == 0) {
		return NULL;
	}
	result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1);

	i = 0;
	while (*s){
		
		if (strstr(s, oldW) == s){
			strcpy(&result[i], newW);
			i += newWlen;
			s += oldWlen;
		}
		else
			result[i++] = *s++;
	}

	result[i] = '\0';
	return result;
}


int main(void){
	char *newstr = NULL;
	char text[100], source[50], target[50];

	printf("Enter the text.\n");
	gets(text);
	printf("Enter the source string.\n");
	scanf(" %s", source);
	printf("Enter the target string.\n");
	scanf(" %s", target);

	newstr = replaceWord(text, source, target);

	// return 값이 null이면 문자열이 없다고 출력후 종료 
	if (newstr == NULL) {
		printf("no words\n");
		return 0;
	}

	printf("%s\n", newstr);
	free(newstr);
	return 0;
}