#include <stdio.h>
//arr2�� ������ ���� arr ��ü�� ���� swap �Լ��� ȣ���Ͽ� ������ ������ �����ϴ� ���α׷�

//arr�� ������ ������ ����ϴ� �Լ�
void swap(int* arr, int count) {
	int j, temp;
	for (j = 0; j < (count)/2; j++) {
		temp = arr[j];
		arr[j] = arr[count - (j + 1)];
		arr[count - (j + 1)] = temp;
	}
}
int main() {
	int i;
	int arr[10];
	int count = 0;
	int num;
	for (i = 0;; i++) {
		scanf("%d", &num);
		if (num > 0) {
			arr[i] = num;
			count++;
		}
		else {
			break;
		}
	}
	swap(arr,count);
	for (i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
