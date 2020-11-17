#include <stdio.h>
/*이 프로그램은 홀수 n를 입력받았을때 서로 다른 세가지의 모습을 
이어서 출력시키는 프로그램이다*/

//홀수 n을 입력받으면 1개부터 n개까지 각줄에 *의 개수를 출력하는 함수이다.
int x(int n) {
	int i, j;
	for (i = 1; i <(n+1); i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//홀수 n을 입력받으면 n개부터 1개까지 각줄에 *의 개수를 출력하는 함수.
int y(int n) {
	int i, j;
	for (i = 1; i < (n + 1); i++) {
		for (j = (n + 1); j> i; j--) {
			printf("*");
		
		}
		printf("\n");
	}
	return 0;
}


//홀수 n을 입력 받으면 n개부터 1개까지 중 홀수에 해당하는 개수만 각줄에 출력하는 함수.
int z(int n) {
	int i, j;
	for (i = 1; i <(n + 1); i = i + 2) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



int main() {
	int num;
	printf("숫자입력:");
	scanf("%d", &num);
	x(num);
	y(num);
	z(num);
	return 0;
}