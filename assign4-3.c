#include <stdio.h>
/*이 프로그램은 5개의 문자로 이루어진 단어를 입력받아서
그 중 숫자가 몇 개인지를 출력하는 프로그램*/

/* is_digit 함수는 아스키코드를 이용하여 i가 0~9사이의
숫자일때 그 갯수가 몇개인지를 나타내는 함수.*/
int is_digit(char ch[]) {
	int num = 0;
	for (int i = 0; i < 5; i++) {
		if (ch[i] >= 48 && ch[i] <= 57)
			num++;
	}
	return num;
}

/*배열을 이용하여 배열안에 다섯개의 문자로 이루어진 단어를 입력받고
구해진 숫자를 나타내는 갯수를 출력하는 함수이다.*/
int main() {

	char len[100];
	printf("Enter a 5-letter word.\n");
	scanf("%s", &len);
	printf("Digit appers %d times.\n", is_digit(len));
	return 0;
}