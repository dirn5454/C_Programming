#include <stdio.h>
//�Է¹޴� ���ڿ��� ȸ������ �ƴ����� �Ǵ��ϴ� ���α׷�

int main() {
	char arr1[100], arr2[100];
	int i, j;

	while (1){
		printf("Enter input sentence.\n");
		int size = 0, count = 0;

		for (i = 0; i < 100; i++){
			scanf("%c", &arr1[i]);
			if (arr1[i] == '\n'){
				break;
			}
			size++;
		}

		if ((arr1[0] == 'q') && (arr1[1] == 'u') && (arr1[2] == 'i') && (arr1[3] == 't')) {
			break;
		}
		for (j = size - 1; j >= 0; j--){
			arr2[j] = arr1[count];
			count++;
		}
		for (i = 0; i < size; i++){
			if (arr1[i] != arr2[i]){
				printf("No, it is NOT a palindrome.\n");
				break;
			}
			else if (i == (size - 1)){
				printf("Yes, it is a palindrome.\n");
			}
		}
	}


	return 0;
}