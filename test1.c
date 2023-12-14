#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int arr[5] = { 0 };
	int min = 1000000000;
	int max = 0;

	for (int i = 0; i < 5; i++) {
		printf("정수를 입력하시오 :");
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		int tmp = arr[i];
		if (min > tmp) { min = tmp; }
		if (max < tmp) { max = tmp; }
	}

	printf("최대값 : %d 최소값 : %d", max, min);
}
