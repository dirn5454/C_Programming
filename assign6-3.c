#include <stdio.h>
/*입력 n을 받아서 1부터n까지의 숫자에 대해 369 게임을 출력하는 프로그램*/
int main() {
	int n, i;
	int num, clap = 0;
	printf("Enter a number.\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		num = i;
		//num에 3,6,9의 숫자가 몇개 들어가있는지 확인
		for (;;) {
			if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) {
				clap++;
			}
			num /= 10;
			if (num == 0) {
				if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) {
					clap++;
				}
				break;
			}
		}
		if (clap == 0) {
			printf("%d\n", i);
		}
		else {
			while (clap != 0) {
				printf("!");
				clap--;
			}
			printf("\n");
		}
	}
	return 0;
}