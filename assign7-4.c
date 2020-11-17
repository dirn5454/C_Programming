#include <stdio.h>
//5개의 정수를 입력받아 그 합계를 출력하는 프로그램
//배열이용
int str[5];
//n값을 입력받고 재귀함수를 통하여 합계를 출력
int sum(int n){
	if (n==0) {
		return str[0];
	}
	else {
		return str[n] + sum(n - 1);
	}
}

int main() {
	int n;
	for (n = 0; n < 5; n++) {
		scanf("%d", &str[n]);
	}
	printf("%d",sum(n));
	return 0;
}