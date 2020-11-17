#include <stdio.h>
#include <stdlib.h>
/*char** p;에 의해 2중 포인터 p를 선언한 후
p = (char**)malloc(2);에 의해 2개의 요소로 이루어진 포인터 배열 p[0], p[1]을 만들고
이후 두 개의 이름을 입력받아 각각을 p[0], p[1]이 가리키는 배열에 저장하되
malloc에 의해 필요한 크기만큼의 공간을 확보하여 저장한다.
물론 그렇게 하자면 이름을 두 번 입력 받아야 한다. 
이후 swap 함수를 호출하여 각각의 배열 내용을 서로 스왑하는 프로그램*/




//swap 함수
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