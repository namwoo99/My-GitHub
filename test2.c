#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int repeatTime = 0;

	printf("입력할 정수의 개수 : ");

	scanf("%d", &repeatTime);

	int sum = 0;

	for (int i = 0; i < repeatTime; i++) {
		int tmp = 0;

		printf("%d번째 요소를 입력하시오", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("합:%d", sum);


}
