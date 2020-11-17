#include <stdio.h>
#include <string.h>
#define MAX 500

char* my_strstr(const char* t, const char* s);
int main(void) {
	char str1[MAX], str2[MAX];
	char* p;
	printf("Enter the text.\n");
	scanf("%s", str1);
	getchar();
	printf("Enter the character to be searched.\n");
	scanf("%s", str2);
	p = my_strstr(str1, str2);
	if (p == NULL) {
		printf("There isn't entered character.\n");
		return 0;
	}
	printf("%s\n", p + strlen(str2));
	return 0;
}
char* my_strstr(const char* t, const char* s) {
	int i, j = 0;
	for (i = 0; i<strlen(t); i++) {
		if (*(t + i) == *(s + j)) {
			j++;
			if (*(s + j) == '\0') {
				break;
			}
		}
		else {
			j = 0;
		}
	}
	if (i == strlen(t)) {
		return NULL;
	}
	return t + i - (strlen(s) - 1);
}