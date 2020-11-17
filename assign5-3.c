#include <stdio.h>
/*이 프로그램은 시저사이퍼 암호화방법이며 key숫자값을 입력받고
입력받은 문자의 아스키코드표에서 key값만큼 건너뛴 문자값을
출력하는 프로그램이다.*/
int main() {

	int key;
	char ch;
	printf("Enter the key.\n");
	scanf("%d", &key);
	getchar();
	printf("Enter the text.\n");
	scanf("%c", &ch);
	printf("The cipher text is, ");
	printf("%c", key + ch);
	/*입력한 문자중 제일 처음 문자를 while문밖으로 꺼내서
	따로 먼저 출력하고 나머지문자들은 while문안에서 출력한다.*/
	while(1) {
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		printf("%c", key + ch);
	}
	return 0;
}