#include <stdio.h>

int main(void)
{
	char my_string1[100];
	char my_string2[100];
	char my_string3[100];

	printf("문자 입력: ");
	scanf("%s %s %s", my_string1, my_string2, my_string3);
	printf("문자 출력: %s %s %s \n", my_string1, my_string2, my_string3);
	return 0;
}