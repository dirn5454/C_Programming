#include <stdio.h>
/* 추가, 삭제 ,확인, 카운트 함수를 가지며
집합 내에 동일한 원소가 있어서는 안 되며,
원소를 제거하는 작업에서 제거하려는 원소가 없으면 그대로 두고,
'q'가 입력되면 끝내는 프로그램
*/

//새로운 원소를 추가하는 함수
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
//배열의 요소를 제거하는 함수
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
//현재 원소의 개수를 알려주는 함수
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
//주어진 원소가 있는지 확인하는 함수
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
			printf("현재 요소의 갯수: %d\n", count_element(set));
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