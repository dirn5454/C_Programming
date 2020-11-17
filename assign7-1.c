#include <stdio.h>
//자연수n을 입력받아서 화면에 n개의 별을 출력하는 프로그램

//재귀함수를 이용하여 입력받은 n개의 별을 출력
int star(int n) {
	int i;
	if (n > 0) {
		printf("*");
		n = star(n - 1);
	}
	else {
		return;
	}
}
int main() {
	int n, i;
	scanf("%d", &n);
	star(n);
	return 0;
	
}