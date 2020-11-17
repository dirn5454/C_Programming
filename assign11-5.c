#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*���ڿ� ������ Ư�� ���ڿ��� �ٸ� ���ڿ��� ��ü�Ͽ� ����ϴ� ���α׷�*/


//���ڿ� ������ Ư�� ���ڿ��� �ٸ� ���ڿ��� ��ü�ϴ� �Լ�
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

	// return ���� null�̸� ���ڿ��� ���ٰ� ����� ���� 
	if (newstr == NULL) {
		printf("no words\n");
		return 0;
	}

	printf("%s\n", newstr);
	free(newstr);
	return 0;
}