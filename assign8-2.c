#include <stdio.h>
/* �߰�, ���� ,Ȯ��, ī��Ʈ �Լ��� ������
���� ���� ������ ���Ұ� �־�� �� �Ǹ�,
���Ҹ� �����ϴ� �۾����� �����Ϸ��� ���Ұ� ������ �״�� �ΰ�,
'q'�� �ԷµǸ� ������ ���α׷�
*/

//���ο� ���Ҹ� �߰��ϴ� �Լ�
int count = 0;
void add_element(int value, int set[]) {
	int j;
	for (j = 0; j <= count; j++) {
		if (value == set[j]) {
			printf("Current set is {");
			for (j = 0; j <= count; j++) {
				if (set[j] != 0) {
					printf("%d", set[j]);
				}
			}
			printf("}\n");
			return;
		}
	}
	set[count] = value;
	printf("Current set is {");
		for (j = 0; j <= count; j++) {
			if (set[j] != 0) {
				printf(" %d ", set[j]);
			}
		}
	printf("}\n");
	count++;
}
//�迭�� ��Ҹ� �����ϴ� �Լ�
void remove_element(int value, int set[]) {
	int j;
	for (j = 0; j < count; j++) {
		if (value == set[j]) {
			set[j] = 0;
		}
	}
	printf("Current set is {");
	for (j = 0; j <= count; j++) {
		if (set[j] != 0) {
			printf("%d", set[j]);
		}
	}
	printf("}\n");
}
//���� ������ ������ �˷��ִ� �Լ�
int count_element(int set[]) {
	int j;
	int p = 0;
	for (j = 0; j < count; j++) {
		if (set[j] != 0) {
			p++;
		}
	}
	return p;
}
//�־��� ���Ұ� �ִ��� Ȯ���ϴ� �Լ�
int has_element(int value, int set[]) {
	int j;
	for (j = 0; j < count; j++) {
		if (value == set[j]) {
			return 1;
		}
		else if (j == count - 1) {
			return 0;
		}
	}
}
int main() {
	int val;
	char ch;
	int set[300] = { 0 };
	
	while(1) {
		printf("Enter input.\n");
		scanf("%c", &ch);
		if (ch == 'q') {
			return 0;
		}
		else if (ch == 'a') {
			scanf("%d",&val);
			getchar();
			add_element(val, set);
		}
		if (ch == 'c'){
			getchar();
			printf("���� ����� ����: %d\n", count_element(set));
		}
		else if (ch == 'h') {
			scanf("%d", &val);
			ch=getchar();
			if (has_element(val, set) == 1) {
				printf("Yes.\n");
			}
			else {
				printf("No.\n");
			}
		}
		else if (ch == 'r') {
			scanf("%d", &val);
			getchar();
			remove_element(val, set);
		}
	}
	return 0;
}