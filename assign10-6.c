#include <stdio.h>
//int A[ ][3] = {1, 2, 3, 4, 5, 6} �̰�, int B[ ][2] = {7, 8, 9, 10, 11, 12} �� �� �� ����� ���� ��� ����� ����ϴ� ���α׷�

int main() {
	int A[][3] = { 1,2,3,4,5,6 };
	int B[][2] = { 7,8,9,10,11,12 };
	int C[2][2];

	int sum;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum = 0;
			for (int k = 0; k < 3; k++) {
				sum += A[i][k] * B[k][j];
			}
			C[i][j] = sum;
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d \t", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}