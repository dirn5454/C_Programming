#include <stdio.h>
/*이 프로그램은 년도를 입력받아서 그 년도가 윤년인지 아닌지를 
판단하여 나타내주는 프로그램이다.*/

//leap_year함수는 입력한 년도가 윤년인지 아닌지를 판단하는 함수이다.
int leap_year(int y) {

	if ((y % 4 == 0) || (y % 400 == 0) && (y % 100 != 0)){
		return printf("It is a leap year.");
	}
	else {
		return printf("It is a Not leap year");
	}
}
// 임의의 년도를 입력받고 년도가 leap_year함수에서 판단된 값을 출력하는 함수.
int main() {
	int year;
	printf("Enter the year.\n");
	scanf("%d", &year);
	leap_year(year);
	return 0;
}