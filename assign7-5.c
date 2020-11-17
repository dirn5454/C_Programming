#include <stdio.h>
//재귀함수를 이용하여 하노이타워문제를 해결하는 프로그램


//재귀호출의 베이스케이스
void move(int n, char x, char y, char z) {
	if (n == 1) {
		printf("move a disk from %c to %c .\n", x, y);
	}
	else {
		move(n - 1, x, z, y);
		printf("move a disk from %c to %c .\n", x, y );
		move(n - 1, z, y, x);
	}
}

int main() {
	int n;
	printf("Enter the number n.\n");
	scanf("%d", &n);
	move(n, 'x', 'y', 'z');
	return 0;
	
}