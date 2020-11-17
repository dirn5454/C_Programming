#include <stdio.h>
/*이 프로그램은 삼각형의 밑변 높이 빗변을 각 변수로 지정하고
입력받은 n값보다 변의 길이가 작다고 가정할때 직각삼각형이
될 수 있는 자연수 a,b,c를 나열하는 프로그램이다.*/

int main() {
	int a, b, c;
	int n;

	printf("Enter the maximum length N.\n");
	scanf("%d", &n);
	printf("The right - angled triangles are,\n");
	/*n값을 입력받고 삼중포문을 통해서 변의길이가 n보다 작다고 조건하여
	해당되는 a,b,c를 구하는 구문이다. */
	for (a=1; a < n; a++) {
		for (b=1; b < n; b++){
			for (c=1; c < n; c++) {
				if (a*a + b * b == c * c) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}
