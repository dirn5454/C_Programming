#include <stdio.h>
/*�Ϸ��� �ڿ����� �Է¹޾� ���������� ��հ��� ����ϴµ� 
��,0�̳� ������ �ԷµǸ� ���α׷��� �����Ѵ�.
ó������ 0�̳� ������ ���� 0.000�� ����ϰ� ���α׷��� ������.*/


int main() {
	int num=0;
	int sum = 0;
	int count = 1;
	double aver = 0;
	printf("Enter an integer.\n");
	scanf("%d", &num);
	/*num���� 0�̰ų� �����϶� 0.000�� ����ϴ� ����.*/
	if (num <= 0) {
		printf("Current average is %.3lf\n", aver);
	}
	/*num���� �ڿ����϶� ��հ��� ���������� ����ϴ� ����.*/
	while (num > 0) {
		
		sum += num;
		aver = sum / count;
		printf("Current average is %.3lf\n", aver);
		printf("Enter an integer.\n");
		scanf("%d", &num);	
		count++;
	}
	return 0;
}