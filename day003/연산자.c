#include <stdio.h>

void main() {
	// 산술 연산자
	// +, -, *, /(몫 출력 나눗셈), % (나머지 출력 나눗셈)

	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	printf("--------------------------------------\n");
	// 대입 연산자 (=)
	// 우측에 있는 값을 좌측에 대입한다
	// 복합 대입 연산자
	// +=, -=, *=, /=, %=

	int n1 = 3, n2 = 4;
	n1 += 3; // n1 = n1 + 3; (= 기호는 가장 마지막에 수행된다 ex. n = 3 + 3 < 3더하기 3이 먼저 수행, n값이 6이 되는 것이 마지막)
	printf("n1 : %d\n", n1);

	n2 *= 4; // n2 = n2 * 4;
	printf("n2 : %d\n", n2);

	printf("--------------------------------------\n");
	// 비교 연산자
	// >(초과), <(미만), >=(이상), <=(이하), ==(일치), !=(불일치)
	// 비교 연산자의 값이 참인가 > 네 ▶ 1 (참)
	//				""	         > 아니요 ▶ 0 (거짓)

	
	int a = 10, b = 11;

	int result = a > b;
	printf("a > b: %d\n", result);

	result = a < b;
	printf("a < b: %d\n", result);

	result = a == b; // 같으면 1, 다르면 0
	printf("a == b: %d\n", result);

	result = a != b; // 다르면 1, 같으면 0
	printf ("a != b: %d\n", result);

	printf("--------------------------------------\n");
	// 증감 연산자
	// ++, --
	// 1씩 증가시키거나 1씩 감소시키는 기능

	// 전위 연산: 변수 앞에서 ++num, --num
	// 후위 연산: 변수 뒤에서 num++, num--

	int i1 = 10, i2 = 10;
	printf("i1: %d\n", i1); // 이건 당연히 10이 나오고
	printf("i1: % d\n", ++i1); // 11  ★ i1 += 1; 〓 i1 = i1 + 1; ★
	printf("i1: %d\n", i1);

	printf("i2: %d\n", i2); // 10
	printf("i2: %d\n", i2++); // 10
	printf("i2: %d\n", i2); // 이때야 11이라고 나옴

	int c = 5;
	int d = c++;
	printf("c: %d, d: %d\n", c, d); // 이때 c는 6 d는 5가 나옴

	// 후위연산은 (+1)을 가지고 있다가 다시 한 번 호출될 때 적용됨
}