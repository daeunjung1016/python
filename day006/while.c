#include <stdio.h>

void main() {
	int num = 0;
	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}
	printf("--------------------------\n");

	int n = 0;

	// 내가 반복 횟수를 정확히 모를 때도 사용이 가능
	while (n != -1) {
		printf("숫자를 입력하세요 (-1 입력 시 종료): ");
		scanf("%d", &n);

		if (n == -1) printf("프로그램을 종료합니다\n");
		else printf("%d을(를) 입력하셨네요\n", n);
	}

	// 무한루프
	// 조건을 만족하는 상태를 유지하면 종료되지 않는 상태
	int i = 0;

	while (1) {
		printf("무한루프 반복중... 숫자를 입력하세요: ");
		scanf("%d", &i);
		printf("%d을(를) 입력하셨네요\n", i);
		}
}