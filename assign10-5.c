#include <stdio.h>
#include <stdlib.h>
/*a, b, c �� ���� ���� �迭�� �����϶�. ���� ����ڷκ���
a, b �迭�� ũ�⿡ ���� ���� �迭�� �����.
a, b �迭�� ũ��� �ٸ� �� ������ c �迭�� ũ��� a, b �迭 ũ�⸦ ���� ũ���� �Ѵ�.
�Է¹��� ���ڷ� a, b �迭�� ������ ä��� �����϶�.
���� a, b �迭�� �պ�(Merge)�Ͽ� c �迭�� �����ϵ� ���ĵ� ������ �����϶�.
���� a, b, c �迭 ������ ����ϴ� ���α׷��� �ۼ�*/

//a,b �迭�� �����ϴ� �Լ�
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

//��� �Լ�
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
	//a,b�� �պ��ؼ� c�迭�� �ִ� ����
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