#include <stdio.h>
// a,b를 입력받아서 a의b승을 출력하는 프로그램

//재귀함수를 이용하여 a의b승을 출력
int power(int a, int b) {
	if (b == 1) {
		return a;
	}
	else {
		return (a * power(a, b - 1));

	}
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",power(a, b));
	return 0;
}