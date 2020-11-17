#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 6
//입력받은 만큼 로또를 출력하는 프로그램

//배열의 길이만큼 출력하는 함수
void print_array(int* arr, int length) {
	int a;
	for (a = 0; a < length; a++)
		printf("%d ", arr[a]);
	printf("\n");
}



//값을 swap하는 함수
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}




//버블 정렬함수
void bubble_sort(int* arr, int length) {
	int pass, current, sorted = 1;
	for (pass = 1; (pass < length) && sorted; pass++) {
		sorted = 0;
		for (current = 0; current < (length - pass); current++) {
			if (arr[current] > arr[current + 1]) {
				swap(&arr[current], &arr[current + 1]);
				sorted = 1;
			}
		}
	}
}

//중복이 있는지 없는지 확인하는 함수
int is_duplicate(int* arr, int length, int n) {
	int index, result = 0;
	for (index = 0; index < length; index++) {
		if (arr[index] == n) {
			result = 1;
		}
	}
	return result;
}

//배열에 랜덤으로 번호를 할당하는 함수
void set_numbers(int* lotto, int* money) {
	int num, i;


	*money = *money - 1000;
	for (i = 0; i < 6; ) {
		num = 1 + rand() % 45;

		if (is_duplicate(lotto, i, num) == 1) {
			continue;
		}
		else
			lotto[i++] = num;
	}
}

int main(void) {
	int money, lotto[6];
	while (1) {
		printf("Enter available money. \n");
		scanf("%d", &money);
		if (money == 0) {
			break;
		}
		printf("Possible sets of lottery numbers are, \n");
		while (1 <= money / 1000) {
			set_numbers(lotto, &money);
			bubble_sort(lotto, MAX);
			print_array(lotto, MAX);
		}
	}
	return 0;
}