#include <stdio.h>
#include <stdlib.h>
/*a, b, c 세 개의 동적 배열을 선언하라. 이후 사용자로부터
a, b 배열의 크기에 따라 동적 배열을 만들라.
a, b 배열의 크기는 다를 수 있으나 c 배열의 크기는 a, b 배열 크기를 합한 크기라야 한다.
입력받은 숫자로 a, b 배열을 각각을 채우고 정렬하라.
이후 a, b 배열을 합병(Merge)하여 c 배열에 저장하되 정렬된 순서로 저장하라.
이후 a, b, c 배열 내용을 출력하는 프로그램을 작성*/

//a,b 배열을 정렬하는 함수
void sort(int *arr, int length) {
	int temp;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//출력 함수
void output(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int *arr1, *arr2, *arr3; 
	int sum;
	int a, b;
	printf("Enter number of elements of array a.\n");
	scanf("%d", &a);
	arr1 = (int*)malloc(a * sizeof(int));
	printf("Enter integers to insert to a.\n");
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr1[i]);
	}
	printf("Enter number of elements of array b.\n");
	scanf("%d", &b);
	arr2 = (int*)malloc(b * sizeof(int));
	printf("Enter integers to insert to b.\n");
	for (int i = 0; i < b; i++) {
		scanf("%d", &arr2[i]);
	}
	arr3 = (int*)malloc((a+b+1)*sizeof(int));
	
	sort(arr1,  a);
	sort(arr2,  b);
	int i = 0, j = 0, k = 0;
	//a,b를 합병해서 c배열에 넣는 구간
	while (i < a || j < b) {
		if (*(arr1 + i) < *(arr2 + j)) {
			*(arr3 + k) = *(arr1 + i);
			i++;
			k++;

		}
		else {
			*(arr3 + k) = *(arr2 + j);
			k++;
			j++;
		}
	}
	if (i >= a) {
		for (int l = j; l < b; l++) {
			*(arr3 + k) = *(arr2 + j);
			k++;
			j++;
		}
	}
	else {
		for (int l = i; l < a; l++) {
			*(arr3 + k) = *(arr1 + i);
			k++;
			i++;
		}
	}

	output(arr1, a);
	output(arr2, b);
	output(arr3, (a + b));


	free(arr1);
	arr1 = NULL;
	free(arr2);
	arr2 = NULL;
	free(arr3);
	arr3 = NULL;
	return 0;
}