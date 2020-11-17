#include <stdio.h>
//입력한 문자열을 10진수로 변환하여 출력하는 프로그램

//입력한 문자열을 10진수로 변환하는 함수
int my_atoi(char *str) {

	int Value = 0;

	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		Value = (Value * 10) + ((int)*str - (int)'0');
		str++;
	}
	return Value;
}


int main() {
	char *arr[100];
	printf("Enter a number.\n");
	scanf("%s", arr);
	printf("The string you entered is %d in decimal.", my_atoi(arr));
	return 0;
}