#include <stdio.h>

void main() {
	// 배열의 이름은 포인터이므로 * 연산자를 사용해
	// 메모리 공간에 접근할 수 있다

	short sarr[3] = { 1, 2, 3 };
	int iarr[3] = { 10, 20, 30 };

	// 인덱스 번호를 통한 접근
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	// 포인터 연산을 통한 접근
	// 포인터 변수의 값을 1씩 증가시켜 다음 주소에 접근할 수 있다
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	// 주소
	// 증가량이 타입마다 다르다는 것을 알 수 있다
	// 아래 같은 경우는 괄호가 없어도 된다
	printf("%d %d %d\n", sarr, (sarr + 1), (sarr + 2));
	printf("%d %d %d\n", iarr, (iarr + 1), (iarr + 2));


}