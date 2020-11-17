#include <stdio.h>
//자연수 N을 입력받아 S = 12 + 22 + ,,, + N2를 계산하여 출력하는 프로그램

//재귀함수를 이용하여 S = 12 + 22 + ,,, + N2를 계산하여 출력
int cal(int n) {
	if (n == 1) {
		return (n * 10 + 2);
	}
	else {
		return ((n * 10 + 2) + cal(n - 1));
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", cal(n));
	return 0;

}