#include <stdio.h>
//��ȣ 1��, 2��, 3�� �� ����� ���ſ� �⸶�ߴٰ� �����ϰ� ��ǥ�� ���ݼ��̻��� ��ǥ������ �缱,�� ��ǥ�ڴ� 100��
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