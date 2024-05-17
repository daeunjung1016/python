#include <stdio.h>

void main() {
	// break
	// 현재 진행 중인 반복문을 강제 종료하는 역할
	// 반복문 안에서만 사용할 수 있다

	// while문과 break
	int num = 1;
	while (1) {
		printf("%d ", num++);

		// ▼ 종료 조건을 결정
		if (num > 3) {
			break;
		}
	}
	printf("----------------------------\n");
	// continue
	// 이후에 코드를 생략하고 반복문의 증감식 또는
	// 조건식으로 돌아가라는 명령

	// continue를 만나면 아래를 출력하는 게 아니라 증감식으로 다시 돌아감!

	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
	}
}