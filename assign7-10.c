#include <stdio.h>
/*��ǻ�Ϳ� long long�� �ʰ����� ������ ������ �Է��Ҽ����⶧����
ū ���ڸ� �Է¹޾� �迭�� �������·� �Է��� �� ���ο����� ����
����� ����ϴ� ���α׷�.
*/
int modulo(char num[], int m){
	int i, count = 0;
	int result = 0;
	for (i = 0; i < 100; i++){
		if (num[i] == '\n' || num[i] == ' '){
			break;
		}
		count++;
	}
	for (i = 0; i <= count - 1; i++){
		result = (result * 10 + ((int)num[i] - 48)) % m;
	}
	return result;
}
int main(){
	int i, j, m;
	char str[100];
	printf("Enter a big positive integer and m.\n");
	for (i = 0; i < 100; i++){
		scanf("%c", &str[i]);
		if (str[i] == '\n' || str[i] == ' '){
			break;
		}
	}
	scanf("%d", &m);
	for (j = 0; j < i; j++){
		printf("%c", str[j]);
	}
	printf(" %c %d is %d.\n", '%', m, modulo(str, m));
	
	
	return 0;
}