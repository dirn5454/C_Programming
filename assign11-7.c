#include <stdio.h>
#include <string.h>
#define MAX 100

char pointer[MAX];
void swap(char*, char*);
void permute(char*, int, int);
int main() {
	char ch[MAX];
	int i, j = 1;
	pointer[0] = 0;
	printf("Enter the text.\n");
	gets(ch);
	for (i = 0; ; i++) {
		if (ch[i] == ' ') {
			ch[i] = '\0';
			pointer[j] = i + 1;
			j++;
		}
		else if (ch[i] == '\0') {
			break;
		}
	}
	permute(ch, 0, j);
	return 0;
}
void swap(char* p, char* q) {
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
	return;
}
void permute(char* s, int left, int right) {
	int i;
	if (left == right) {
		for (i = 0; i < right; i++) {
			printf("%s ", s + pointer[i]);
		}
		printf("\n");
	}
	else {
		for (i = left; i < right; i++) {
			swap(&pointer[left], &pointer[i]);
			permute(s, left + 1, right);
			swap(&pointer[left], &pointer[i]);
		}
	}
}