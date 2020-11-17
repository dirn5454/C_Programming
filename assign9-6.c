#include <stdio.h>
#define MAX 10
/*삽입정렬함수를 이용하여 무작위인 배열 내용을 정렬하는 프로그램*/

void insertion_sort(int arr[], int length);
void output(int arr[], int length);

int main() {
	int arr[MAX];
	char c;
	int num, length = 0;
	int input;

	printf("Enter input numbers\n");
	for (int i = 0; i<MAX; i++) {
		scanf("%d", &num);

		if (num == -1) {
			break;
		}
		else {
			arr[i] = num;
			length++;
		}
	}
	printf("Before: ");
	output(arr, length);

	insertion_sort(arr, length);

	printf("After: ");
	output(arr, length);
}

//삽입정렬을 이용하여 정렬하는 함수
void insertion_sort(int arr[], int length) {
	int i, j, key;
	for (i = 1; i < length; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}
//배열내의 정보를 차례대로 출력하는 프로그램
void output(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}