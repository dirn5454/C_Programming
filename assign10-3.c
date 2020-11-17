#include<stdio.h>
#include<stdlib.h>
//행과 열 수를 입력 받아 동적 배열을 만든 후, 배열 데이터를 입력받아 각각의 요소를 제곱한 값을 출력하는 프로그램
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
	//확인을 위해 화면 잡기 명령어 주석처리
	//system("pause");
	return 0;
}