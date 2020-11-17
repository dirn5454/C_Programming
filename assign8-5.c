#include <stdio.h>
//arr2를 만들지 말고 arr 자체에 대해 swap 함수를 호출하여 순서를 뒤집어 리턴하는 프로그램

//arr의 순서를 뒤집어 출력하는 함수
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
