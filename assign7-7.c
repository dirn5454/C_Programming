#include <stdio.h>
//어떤 숫자가 과반수라면 그것과 다른 모든 수를 일대일로 상쇄시켜도 살아남고, 살아남은 숫자가 해서 반드시 과반수는 아니다. 따라서 살아남은 숫자가 배열 전체에서 몇 번 나타나는지 다시 한 번 확인하는 프로그램
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
