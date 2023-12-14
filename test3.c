#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int repeatTime;
	printf("입력할 정수의 개수:");
	scanf("%d", &repeatTime);

	int arr[1000];

	for (int i = 0; i < repeatTime; i++) {
		printf("%d번째 정수를 입력하시오:", i);
		scanf("%d", &arr[i]);
	}

	int sum = 0;

	for (int i = 0; i < repeatTime; i++) {
		sum += arr[i];
	}

	printf("합 : %d", sum);
	
}
