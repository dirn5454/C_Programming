#include <stdio.h>
/*main에서 입력 데이터를 받아 정렬한 후,
삽입 및 삭제 작업을 가한 결과 배열 내용을 출력하는 프로그램.
단, 입력의 끝은 –1로 나타내며,
배열 내에 삭제할 데이터가 없을 경우에도 배열 내용을 출력*/

void output(int arr[]);
void sort(int arr[]);
void insertion(int arr[], int input);
void deletion(int arr[], int input);

int size = 0;

int main() {
	int arr[10];
	char c;
	int num;
	int input;

	printf("Enter input numbers\n");
	for (int i = 0; i<10; i++) {
		scanf("%d", &num);

		if (num == -1) {
			break;
		}
		else {
			arr[i] = num;
			size++;
		}
	}
	
	sort(arr);
	output(arr);

	while (1) {
		getchar();
		printf("Enter operation.\n");
		c = getchar();
		switch (c) {
		case 'q':
			return 0;
		case 'i':
			scanf("%d", &input);
			insertion(arr, input);
			output(arr);
			continue;
		case 'd':
			scanf("%d", &input);
			deletion(arr, input);
			output(arr);
			continue;
		}
	}

}


//배열의 내용을 출력하는 함수
void output(int arr[]) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//버블정렬함수
void sort(int arr[]) {

	int temp;
	for (int i = 0; i < size-1; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}
//배열에 새로운 숫자를 적절한 위치에 삽입시키는 함수
void insertion(int arr[], int input) {
	int index = 0;
	while (index < size) {
		if (arr[index] < input) {
			index++;
		}
		else {
			break;
		}
	}

	for (int i = size; i >= index; i--) {
		arr[i + 1] = arr[i];
	}

	arr[index] = input;
	size++;
}

//배열내에 데이터 하나를 삭제하는 함수
void deletion(int arr[], int input) {
	int index = 0;
	for (int i = 0; i<size; i++) {
		if (arr[i] == input) {
			index = i;
		}
	}

	if (index != 0) {
		for (int j = index; j < size; j++) {
			arr[j] = arr[j + 1];
		}
		size--;
	}
}
