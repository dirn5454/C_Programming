#include <stdio.h>
/*이 프로그램은 어떤자판기가 500원,100원,50원,10원짜리 동전을
가지고 있을때 입력받은 거스름돈 값에 맞게 동전을 거슬러주는 프로그램이다*/

/*change 함수는 입력받은 거스름돈에 맞게 고액권부터 사용하여
동전을 최소화한 갯수를 main함수로 넘긴다.*/
int change(int coin) {

	while (coin > 0) {
		if (coin < 500) {
			printf("100원 %d개, 50원 %d개, 10원 %d개", coin / 100, (coin % 100) / 50, ((coin % 100) % 50) / 10);
			break;
		}
		else {
			printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개", coin / 500, (coin % 500) / 100, (coin % 100) / 50, ((coin % 100) % 50) / 10);
			break;
		}
	}
	return 0;
}
//거스름돈을 입력받고 동전을 갯수를 출력하는 함수이다.
int main() {
	int coin;
	int result = 0;
	printf("Enter the change.\n");
	scanf("%d", &coin);
	change(coin);
	return 0;

}