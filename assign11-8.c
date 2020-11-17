#include <stdio.h>

int main() {
	char* str;
	char ch;
	int i;
	printf("Enter text.\n");
	str = malloc(sizeof(char) * 1);
	scanf("%c", str);
	for (i = 1;; i++) {
		scanf("%c", &ch);
		str = realloc(str, sizeof(char)*(i + 1));
		if (ch == '\n') {
			*(str + i) = '\0';
			break;
		}
		*(str + i) = ch;
	}
	printf("%s\n", str);
	return 0;
}