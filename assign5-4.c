#include <stdio.h>
/*이 프로그램은 숫자 a,b를 입력받고  a의 b제곱한 만큼의
값을 출력하는 프로그램이다*/

/*power 함수는 전달받은 매개변수 a,b를 a의b제곱한 값을
출력하는 프로그램이다. */
int power(int a, int b) {
	
	int i;
	int c = 1;
	for (i = 1; i <= b; i++) {
		c = c * a;
	}
	return c;
}

int main() {
	
	int a, b;
	printf("Enter base and power.\n");
	scanf("%d %d", &a, &b);

	printf("%d to the %d is %d", a, b, power(a, b));
	return 0;
}