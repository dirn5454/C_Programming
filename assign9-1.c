#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 6
//�Է¹��� ��ŭ �ζǸ� ����ϴ� ���α׷�

//�迭�� ���̸�ŭ ����ϴ� �Լ�
void print_array(int* arr, int length) {
	int a;
	for (a = 0; a < length; a++)
		printf("%d ", arr[a]);
	printf("\n");
}



//���� swap�ϴ� �Լ�
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}




//���� �����Լ�
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

//�ߺ��� �ִ��� ������ Ȯ���ϴ� �Լ�
int is_duplicate(int* arr, int length, int n) {
	int index, result = 0;
	for (index = 0; index < length; index++) {
		if (arr[index] == n) {
			result = 1;
		}
	}
	return result;
}

//�迭�� �������� ��ȣ�� �Ҵ��ϴ� �Լ�
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