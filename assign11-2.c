#include <stdio.h>
//�Է� ���� �� ���� ���ڿ� ũ�⸦ ���Ͽ� ����ϴ� ���α׷�

//strcmp �Լ��� ������ ������ �����ϴ� my_strcmp �Լ�
int my_strcmp(char* arr1, char* arr2) {
	int result;
	for (int i = 0; arr1[i] != '\0' || arr2[i] != '\0'; i++) {
		if (arr1[i] == arr2[i]) {
			continue;
		}
		else if (arr1[i] < arr2[i]) {
			return -1;
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main() {
	char arr1[100];
	char arr2[100];
	int result;
	while (1) {
		printf("Enter the first string.\n");
		scanf("%s", arr1);
		if ((my_strcmp(arr1, "quit")) == 0) break;
		printf("Enter the second string.\n");
		scanf("%s", arr2);
		if ((my_strcmp(arr2, "quit")) == 0) break;

		result = my_strcmp(arr1, arr2);
		switch (result) {

		case 0:
			printf("%s and %s are same", arr1, arr2);
			break;

		case 1:
			printf("%s is smaller than %s \n", arr2, arr1);
			break;

		case -1:
			printf("%s is smaller than %s \n", arr1, arr2);
			break;
		}
	}
	return 0;
}