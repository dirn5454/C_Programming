#include <stdio.h>
// �ڿ����� ������� arr �迭�� �������� arr �迭�� �����, ���� ���� ��, �׸��� ���� ū ���� ����ϴ� ���α׷�

int count = 0;
//�ּڰ� �ִ밪�� ���ϰ� �����ϴ� �Լ�
void min_max(int* arr1, int* min, int* max) {

	int j;
	*max = arr1[0];
	*min = arr1[0];
	for (j = 1; j < count; j++) {
		if (arr1[j] > *max) {
			*max = arr1[j];
		}
		else if (arr1[j] < *min) {
			*min  = arr1[j];
		}
	}
}
int main() {
	int i;
	int num;
	int arr1[100];
	int min=0 , max=0;
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
	min_max(arr1, &min, &max);
	printf("�迭�� ����: ");
	for (i = 0; i < count; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	return 0;
}
