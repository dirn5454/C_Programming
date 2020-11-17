#include <stdio.h>
#include <stdlib.h>
/*char** p;�� ���� 2�� ������ p�� ������ ��
p = (char**)malloc(2);�� ���� 2���� ��ҷ� �̷���� ������ �迭 p[0], p[1]�� �����
���� �� ���� �̸��� �Է¹޾� ������ p[0], p[1]�� ����Ű�� �迭�� �����ϵ�
malloc�� ���� �ʿ��� ũ�⸸ŭ�� ������ Ȯ���Ͽ� �����Ѵ�.
���� �׷��� ���ڸ� �̸��� �� �� �Է� �޾ƾ� �Ѵ�. 
���� swap �Լ��� ȣ���Ͽ� ������ �迭 ������ ���� �����ϴ� ���α׷�*/




//swap �Լ�
void swap(char* p, char* q){
	char tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

int main(){
	char** name;
	char ch;
	int a = 0, b = 0;
	printf("Enter the two name.\n");
	name = (char**)malloc(sizeof(char*) * 2);
	for (int i = 0;; i++){
		a++;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
	}
	for (int i = 0;; i++){
		b++;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
	}
	for (int i = 0; i < 2; i++){
		if (a > b){
			name[i] = malloc(a * sizeof(char));
		}
		else{
			name[i] = malloc(b * sizeof(char));
		}
	}
	printf("Enter the two names again.\n");
	scanf("%s%s", name[0], name[1]);
	if (a > b){
		for (int i = 0; i <= a; i++){
			swap(&name[0][i], &name[1][i]);
		}
	}
	else{
		for (int i = 0; i <= b; i++){
			swap(&name[0][i], &name[1][i]);
		}
	}
	printf("The result is, \n");
	printf("%s\n%s\n", name[0], name[1]);
	for (int i = 0; i < 2; i++){
		free(name[i]);
	}
	free(name);
	return 0;
}