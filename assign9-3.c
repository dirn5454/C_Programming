#include<stdio.h>
/*average_by_array,average_by_pointer�� ä��µ�, 
 �տ��� �迭��ȣ��,�ڿ��� �����ͻ�������� ����ϴ� ���α׷�
*/

//�迭��ȣ�� �̿��� ������� �Լ�
int average_by_array(int p[], int n) {

	int sum = 0;
	int average = 0;

	for (int i = 0; i<n; i++) {
		sum += p[i];
	}

	average = sum / n;
	return average;
}
//������ ��������� �ϴ� �Լ�
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