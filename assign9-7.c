#include <stdio.h>
#define MAX_SIZE 12
/*12개의 입력 숫자를 배열에 저장하고 정렬한 후에, 
2진 탐색에 의해 해당 숫자가 배열 인덱스 몇 번에 저장되어 있는지를 출력하고,
없으면 “No such data.”라고 출력하는 프로그램*/

void insertion_sort(int arr[]);
void output(int arr[]);
int binary_search(int arr[], int input, int first, int last);

int main() {
	int arr[MAX_SIZE];
	int input = 0;
	int index = 0;

	printf("Enter data\n");
	for (int i = 0; i<MAX_SIZE; i++) {
		scanf("%d", &arr[i]);
	}



	insertion_sort(arr);

	while (1) {

		printf("Enter data to be searched.\n");
		scanf("%d", &input);

		if (input == -1) {
			return 0;
		}
		index = binary_search(arr, input, 0, 11);
		if (index == -1) {
			printf("No such data.\n");
		}
		else {
			printf("It is in index %d.\n", index);
		}

	}
}
//배열의 내용을 크기순으로 정렬시키는 함수
void insertion_sort(int arr[]) {
	int i, j, key;
	for (i = 1; i < MAX_SIZE; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}
//배열의 내용을 출력하는 함수
void output(int arr[]) {
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

//재귀호출을 통한 2진탐색함수
int binary_search(int arr[], int input, int first, int last)
{
	int middle;

	if (first > last)
	{
		return -1;
	}

	middle = (first + last) / 2;

	if (input == arr[middle])
	{
		return middle;
	}
	else if (input < arr[middle])
	{
		return binary_search(arr, input, first, middle - 1);
	}
	else
	{
		return binary_search(arr, input, middle + 1, last);
	}
}