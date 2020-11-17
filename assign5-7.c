#include <stdio.h>
/*일련의 자연수를 입력받아 지속적으로 평균값을 출력하는데 
단,0이나 음수가 입력되면 프로그램을 종료한다.
처음부터 0이나 음수가 들어가면 0.000을 출력하고 프로그램이 끝난다.*/


int main() {
	int num=0;
	int sum = 0;
	int count = 1;
	double aver = 0;
	printf("Enter an integer.\n");
	scanf("%d", &num);
	/*num값이 0이거나 음수일때 0.000을 출력하는 구문.*/
	if (num <= 0) {
		printf("Current average is %.3lf\n", aver);
	}
	/*num값이 자연수일때 평균값을 지속적으로 출력하는 구문.*/
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