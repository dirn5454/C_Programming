#include <stdio.h>
//기호 1번, 2번, 3번 세 사람이 선거에 출마했다고 가정하고 투표의 과반수이상이 투표했을때 당선,단 투표자는 100명
int main() {
	int str[100];
	int i;
	int count[3] = { 0 };
	printf("Enter the vote.\n");
	for (i = 0; i < 100; i++) {
		scanf("%d", &str[i]);
		if (str[i] == -1) {
			break;
		}
		else if (str[i] == 1) {
			count[0]++;
		}
		else if (str[i] == 2) {
			count[1]++;
		}
		else if (str[i] == 3) {
			count[2]++;
		}
	}
	if (count[0] > (i + 1) / 2) {
		printf("Number 1 is the winner.");
	}
	else if (count[1] < (i + 1) / 2) {
		printf("Number 2 is the winner.");
	}
	else if (count[2] > (i + 1) / 2) {
		printf("Number 3 is the winner.");
	}
	else {
		printf("Number is No the winner.");
	}


	return 0;
}