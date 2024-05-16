#include <stdio.h>

void main() {
	// do-while
	// while문은 선비교 후처리
	// do-while문은 일단 무조건 한 번을 실행함
	// 그 후에 조건과 비교해서 거짓이면 반복 종료

	// do{
	// 반복하고자 하는 명령
	// }while(조건식);

	int n = 5;
	do {
		printf("n의 값은 %d이다\n", n);
		n++;
	} while (n < 10);

	printf("--------------------------\n");
	int num = -1;
	do {
		printf("-1 입력 시 종료: ");
		scanf("%d", &num);
	} while (num != -1);

	// 보통 while문은 몇번 반복해야 하는지 알기 어려운 경우에
	// 사용을 많이 한다

}