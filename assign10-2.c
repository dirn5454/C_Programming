#include<stdio.h>
#include <string.h>
#include<stdlib.h>
/*%s 포맷으로 문자열을 입력받은 후,
포인터 산술 연산에 의해 배열 내용을 출력하되
void print_array(char *arr, int length); 함수를 재귀함수로 만들어서 호출하는 프로그램*/

//재귀를 이용하여 길이만큼 출력하는 함수
void print_array(char* arr) {
	if (*arr) {

		printf("%c", *arr);

		print_array(arr + 1);

	}
}

int main() {
	char arr[100];
	scanf("%s", arr);
	print_array(arr);
	system("pause");
	return 0;
}
