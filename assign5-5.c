#include <stdio.h> 
//이 프로그램은 입력한 자연수의 자리수를 반대로 출력하는 프로그램이다*/

/*rverse함수는 입력받은 자연수의 자리수를 반대로 출력하고
입력받은 자연수의 부호가 마이너스이면 프로그램끝내는 함수이다.*/
int reverse_it(int num) {
	
	for (; num > 0;){
		for (; num > 0; num = num / 10) {
			if (num % 10 != 0) {
				printf("%d", num % 10);
			}
		}
		printf(".\n");
		printf("Enter an integer.\n");
		scanf("%d", &num);
	}
	return 0;
}
//메인함수는 값을 입력받고 reverse함수에서 받은값을 출력하는 함수이다.
int main() {
	int num;
	printf("Enter an integer.\n");
	scanf("%d", &num);
	reverse_it(num);
	return 0;

}