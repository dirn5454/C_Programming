#include <stdio.h>
// 자연수를 순서대로 arr 배열에 저장한후 arr 배열의 내용과, 가장 작은 값, 그리고 가장 큰 값을 출력하는 프로그램

int count = 0;
//최솟값 최대값을 구하고 저장하는 함수
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
	printf("배열의 내용: ");
	for (i = 0; i < count; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	return 0;
}
