#include <stdio.h>
/*�� ���α׷��� �ﰢ���� �غ� ���� ������ �� ������ �����ϰ�
�Է¹��� n������ ���� ���̰� �۴ٰ� �����Ҷ� �����ﰢ����
�� �� �ִ� �ڿ��� a,b,c�� �����ϴ� ���α׷��̴�.*/

int main() {
	int a, b, c;
	int n;

	printf("Enter the maximum length N.\n");
	scanf("%d", &n);
	printf("The right - angled triangles are,\n");
	/*n���� �Է¹ް� ���������� ���ؼ� ���Ǳ��̰� n���� �۴ٰ� �����Ͽ�
	�ش�Ǵ� a,b,c�� ���ϴ� �����̴�. */
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
