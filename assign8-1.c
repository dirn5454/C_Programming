#include <stdio.h>
//입력받은 문장 중에 'e'가 있는지를 확인하여 있으면 "yes"를, 없으면 "no"를 출력하는 프로그램
//무조건 마지막에 'e'를 추가적으로 삽입
//'e'를 찾되 찾은 위치가 마지막이면 "no"라고 출력하고 그렇지 않으면 "yes"라고 출력
int main() {
	int i;
	int count = 0;
	char str[100];
	printf("Enter input sentence.\n");
	for (i = 0; ; i++) {
		scanf("%c", &str[i]);
		count++;
		if (str[i] == '\n') {
			str[i] = 'e';
			break;
		}
	}
	for (i = 0; i < count; i++) {
		if (str[i] == 'e') {
			if (i == count - 1) {
				printf("no");
				break;
			}
			else {
				printf("yes");
				break;
			}
		}
	}
	return 0;
}