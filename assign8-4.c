#include <stdio.h>
// arr1�� ������ ������ �迭 arr2�� ��Ÿ���� ���α׷�

int count = 0;
// arr1�� ������ ������ �迭 arr2�� ����ϴ� �Լ�
int* reverse_array(int* arr1, int* arr2) {
	int j;

	for (j = 0; j < count; j++) {
		arr2[j] = arr1[count - 1 - j];
	}
}
int main() {
	int i;
	int num;
	int arr1[100], arr2[100];
	for (i = 0;; i++) {
		scanf("%d", &num);
		if (num > 0) {
			arr1[i] = num;
			count++;
		}
		else {
			break;
		}
	}
	reverse_array(arr1, arr2);
	for (i = 0; i < count; i++) {
		printf("arr1�迭�� ����: %d arr2�迭�� ����: %d", arr1[i], arr2[i]);
		printf("\n");
	}
	
	return 0;
}
