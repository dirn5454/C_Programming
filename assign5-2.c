#include <stdio.h>
/*이 프로그램은 두 숫자를 입력받은후 두 숫자가 1이외에는 공약수가 없는 서로소인지를
판별하고 서로소면 문자y, 그렇지않으면 문자n을 반환해 값을 출력하는 프로그램이다.*/

/*is_prime함수는 두 숫자를 입력받아서 그 두 숫자가 1외에는 공약수가 없는 서로소인지를
판별하는 함수이다.*/
char isPrime(int a, int b) {
	
	int i;
	int num=0;
	int m;
	if (a < b) {
		m = a;
	}
	else {
		m = b;
	}
	for (i = 2; i <= m; i++) {
		if (a%i == 0 && b%i == 0) {
			num++;
		}
	}
	if (num==0) {
		return 'y';
	}
	else {
		return 'n';
	}
}
//메인함수는 판별된값을 전달받아서 'y이면 서로소이다.','n이면 서로소가 아니다.'를 출력하는 함수이다.
int main() {
	int a, b;
	int result;

	printf("Enter two numbers.\n");
	scanf("%d %d", &a, &b);
	result = isPrime(a, b);
	if (result == 'y') {
		printf("They are mutually prime.\n");
	}
	else if(result == 'n') {
		printf("They are not mutually prime.\n");
	}
	return 0;
}