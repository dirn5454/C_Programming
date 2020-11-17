#include <stdio.h>
/*컴퓨터에 long long읖 초과라흔 정수를 정수를 입력할수없기때문에
큰 숫자를 입력받아 배열에 문자형태로 입력한 후 모듈로연산을 가해
결과를 출력하는 프로그램.
*/
int modulo(char num[], int m){
	int i, count = 0;
	int result = 0;
	for (i = 0; i < 100; i++){
		if (num[i] == '\n' || num[i] == ' '){
			break;
		}
		count++;
	}
	for (i = 0; i <= count - 1; i++){
		result = (result * 10 + ((int)num[i] - 48)) % m;
	}
	return result;
}
int main(){
	int i, j, m;
	char str[100];
	printf("Enter a big positive integer and m.\n");
	for (i = 0; i < 100; i++){
		scanf("%c", &str[i]);
		if (str[i] == '\n' || str[i] == ' '){
			break;
		}
	}
	scanf("%d", &m);
	for (j = 0; j < i; j++){
		printf("%c", str[j]);
	}
	printf(" %c %d is %d.\n", '%', m, modulo(str, m));
	
	
	return 0;
}