#include <stdio.h>
/*�Է� n�� �޾Ƽ� 1����n������ ���ڿ� ���� 369 ������ ����ϴ� ���α׷�*/
int main() {
	int n, i;
	int num, clap = 0;
	printf("Enter a number.\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		num = i;
		//num�� 3,6,9�� ���ڰ� � ���ִ��� Ȯ��
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