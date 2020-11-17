#include<stdio.h>
/*average_by_array,average_by_pointer를 채우는데, 
 앞에껀 배열기호를,뒤에껀 포인터산술연산을 사용하는 프로그램
*/

//배열기호를 이용한 산술연산 함수
int average_by_array(int p[], int n) {

	int sum = 0;
	int average = 0;

	for (int i = 0; i<n; i++) {
		sum += p[i];
	}

	average = sum / n;
	return average;
}
//포인터 산술연산을 하는 함수
int average_by_pointer(int *p, int n) {
	int sum = 0;
	int average = 0;

	for (int i = 0; i<n; i++) {
		sum += *p;
		p++;
	}
	average = sum / n;
	return average;
}

int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };
	printf("%d\n", average_by_array(arr, 5));
	printf("%d\n", average_by_pointer(arr, 5));
	return 0;
}