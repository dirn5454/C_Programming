#include <stdio.h>
/*년도와 월을 입력받아 해당 훵릐 달력을 찍는 프로그램다 단 윤년은 2월이 29일 까지이며 그해는 366일이다*/
int main() {
	int i, yun = 0;
	int year, month;
	int day, day1 = 0, day2 = 0, count = 0;
	int month_day[12] = { 30,28,31,30,31,30,31,31,30,31,30,31 };

	printf("read year and month.\n");
	scanf("%d %d", &year, &month);

	for (i = 0; i < year; i++) {
		if (i % 4 == 0 && i % 100 != 0) {
			count++;
		}
		else if (i % 400 == 0) {
			count++;
		}
	}
	/*입력받은 년도의 이전 년도까지의 일수*/
	day1 = 365 * (year - 1) + count;

	/*입력년도 1월 1일1부터 입력한 월의 1일까지 일수를 구하는 구문*/
	for (i = 0; i < month - 1; i++) {
		day2 += month_day[i];
	}
	day2 += 1;
    //윤년일때
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		yun = 1;
		if (month >= 3) {
			day2 += 1;
		}
	}
	//윤년이 아닐때
	else {
		yun = 0;
		day2 = day2;
	}
	// 입력한 년도의 이전년도까지의 일수와 입력한 년도와 입력한 월의 1일까지의 합
	day = day1 + day2;

	printf("\n");
	printf("\t  %d년 %d월 \n", year, month);
	printf("  일  월  화  수  목  금  토\n");
	//시작요일에 맞춰서 정렬하는 구문
	for (i = 0; i < day % 7; i++) {
		printf("    ");
	}
	int cut = (day % 7);
	if (yun == 1 && month == 2) {
		for (i = 1; i <= 29; i++) {
			cut++;
			printf("%4d", i);
			if (cut % 7 == 0)
				printf("\n");
		}
	}
	else {
		for (i = 1; i <= month_day[month - 1]; i++) {
			cut++;
			printf("%4d", i);
			if (cut % 7 == 0)
				printf("\n");
		}
	}
	return 0;
}