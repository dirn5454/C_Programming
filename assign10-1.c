#include <stdio.h>
#include <string.h>
/* %s 포맷으로 문자열을 입력받아 배열에 저장한 후, 그것을 거꾸로 출력하는 프로그램*/
//한글입력의 경우에도 제대로 출력해야함

int main() {
	int len;
	char arr[100];
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = len - 1; i >=0;) {
		if ((*(arr+i) >= 0) && (*(arr + i) <= 127)) {
			printf("%c", *(arr + i));
			i--;
		}
		else {
			printf("%c", *(arr + i-1));
			printf("%c", *(arr + i));
			i -= 2;
		}
	}
	return 0;
}