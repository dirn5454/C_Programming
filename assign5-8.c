#include <stdio.h>
/*이 프로그램은 입력된 문장에서 영어모음이 몇번나오는지를 출력하는 프로그램이다.*/

int main() {
	int a=0;
	char ch;
	printf("Enter a sentence.\n");
	/*for무한루프에서 ch변수의 문장에서 모음이 몇번 나오는지를 판단하여 출력하고
	\n을 만나면 for문을 종료하고 모음개수를 출력한다 */
	for (; ; ) {
		scanf("%c", &ch);
		if (ch == 'e' || ch == 'a' || ch == 'i' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'U') {
			a++;
		}
		else if (ch == '\n') {
			break;
		}
	}
	printf("Vowels appear %d times.", a);
	return 0;
}