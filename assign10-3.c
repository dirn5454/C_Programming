#include<stdio.h>
#include<stdlib.h>
//��� �� ���� �Է� �޾� ���� �迭�� ���� ��, �迭 �����͸� �Է¹޾� ������ ��Ҹ� ������ ���� ����ϴ� ���α׷�
int main()
{
	int x , y ;
	int** arr;

	printf("Enter row and column.\n");
	scanf("%d%d", &x, &y);

	arr = (int**)malloc(sizeof(int*)*x);

	for (int i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int)*y);
	}
	printf("Enter the value of array elements.\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The result is\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%d \t", arr[i][j]* arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < x; i++) {
		free(arr[i]);
		arr[i] = NULL;
	}
	free(arr);
	arr = NULL;
	//Ȯ���� ���� ȭ�� ��� ��ɾ� �ּ�ó��
	//system("pause");
	return 0;
}