#include <stdio.h>
//� ���ڰ� ���ݼ���� �װͰ� �ٸ� ��� ���� �ϴ��Ϸ� �����ѵ� ��Ƴ���, ��Ƴ��� ���ڰ� �ؼ� �ݵ�� ���ݼ��� �ƴϴ�. ���� ��Ƴ��� ���ڰ� �迭 ��ü���� �� �� ��Ÿ������ �ٽ� �� �� Ȯ���ϴ� ���α׷�
int main(){
	int arr1[200], arr2[200];
	int i, j, k, Survivor = 0;
	int count = 0;
	printf("Enter the numbers.\n");
	for (k = 0; k < 200; k++){
		scanf("%d", &arr1[k]);
		if (arr1[k] == -1){
			break;
		}
	}
	for (i = 0; i < k; i++){
		arr2[i] = arr1[i];
	}
	for (i = 0; i < k; i++){
		for (j = 0; j < k; j++){
			if ((arr2[i] != arr2[j]) && (arr2[i] != 0) && (arr2[j] != 0) && (arr2[i] <= 3) && (arr2[j] <= 3) && (arr2[i] >0) && (arr2[j] >0)) {
				arr2[i] = arr2[j] = 0;
			}
		}
	}
	for (i = 0; i < k; i++){
		if (arr2[i] != 0 && (arr2[i] <= 3) && (arr2[i] >0)){
			Survivor = arr2[i];
			break;
		}
	}
	if (Survivor == 0){
		printf("There is no winner.\n");
		return 0;
	}
	for (i = 0; i < k; i++){
		if (arr1[i] == Survivor){
			count++;
		}
	}
	if (count >(k - 1) / 2){
		printf("Number %d is winner.\n", Survivor);
	}
	else{
		printf("There is no winner.\n");
	}
	return 0;
}
