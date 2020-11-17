#include <stdio.h>
// arr1의 순서를 뒤집은 배열 arr2를 나타내는 프로그램

int count = 0;
// arr1의 순서를 뒤집은 배열 arr2을 출력하는 함수
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
		printf("arr1배열의 내용: %d arr2배열의 내용: %d", arr1[i], arr2[i]);
		printf("\n");
	}
	
	return 0;
}
