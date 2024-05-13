# include <stdio.h>
// 매크로 상수 (아래에 적은 define ~)
// 매크로 상수를 선언하면 컴파일러는 컴파일 시 가장 먼저
// 매크로 상수를 처리한다
# define LENGTH2 10
# define PI 3.14

void main() {
	// 상수
	// 변수와 상대적인 개념
	// 변수는 실행되는 동안 값이 바뀔 수 있음
	// 상수는 프로그램이 실행되는 동안 변하지 않는 값

	// 상수 생성 방법
	// 1. 심볼릭 상수
	const int LENGTH = 10;

	// LENGTH = 20; ← 위에 10이라고 이미 규정을 했기 때문에 이거 안 됨!
	// 상수는 초기화 후 다시 대입이 불가능
	// 상수명은 모두 대문자로 작성하는 것이 규칙

	int radious = 5;
	printf("원의 넓이: %.2f\n", radious * radious * PI);
	printf("원의 둘레: %.2f\n", 2 * PI * radious);

}