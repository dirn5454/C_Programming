#include <stdio.h>
/*�� ���α׷��� ����ǱⰡ 500��,100��,50��,10��¥�� ������
������ ������ �Է¹��� �Ž����� ���� �°� ������ �Ž����ִ� ���α׷��̴�*/

/*change �Լ��� �Է¹��� �Ž������� �°� ��ױǺ��� ����Ͽ�
������ �ּ�ȭ�� ������ main�Լ��� �ѱ��.*/
int change(int coin) {

	while (coin > 0) {
		if (coin < 500) {
			printf("100�� %d��, 50�� %d��, 10�� %d��", coin / 100, (coin % 100) / 50, ((coin % 100) % 50) / 10);
			break;
		}
		else {
			printf("500�� %d��, 100�� %d��, 50�� %d��, 10�� %d��", coin / 500, (coin % 500) / 100, (coin % 100) / 50, ((coin % 100) % 50) / 10);
			break;
		}
	}
	return 0;
}
//�Ž������� �Է¹ް� ������ ������ ����ϴ� �Լ��̴�.
int main() {
	int coin;
	int result = 0;
	printf("Enter the change.\n");
	scanf("%d", &coin);
	change(coin);
	return 0;

}