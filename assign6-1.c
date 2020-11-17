#include <stdio.h>
 //구구단을 출력하는 프로그램
int main() {
	int a, b;
	
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			int result = a * b;
			printf("%d × %d = %d\n", a, b, result);
		}
		printf("\n");
	}
	return 0;
}