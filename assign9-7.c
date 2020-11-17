#include <stdio.h>
#define MAX_SIZE 12
/*12���� �Է� ���ڸ� �迭�� �����ϰ� ������ �Ŀ�, 
2�� Ž���� ���� �ش� ���ڰ� �迭 �ε��� �� ���� ����Ǿ� �ִ����� ����ϰ�,
������ ��No such data.����� ����ϴ� ���α׷�*/

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
//�迭�� ������ ũ������� ���Ľ�Ű�� �Լ�
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
//�迭�� ������ ����ϴ� �Լ�
void output(int arr[]) {
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

//���ȣ���� ���� 2��Ž���Լ�
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