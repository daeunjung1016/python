#include <stdio.h>

void main() {
	// 논리 연산자
	// 참과 거짓을 가지고 연산을 하는 연산자
	// &&
	// AND의 의미 > A와 B가 모두 참이면 참을 반환한다 
	// ex) A && B

	// || (Shift + \)
	// or의 의미 > A와 B 중 하나라도 참이면 참을 반환
	// ex) A || B

	// !
	// NOT의 의미 > 참을 거짓으로, 거짓을 참으로 반환
	// ex) !A

	int num1 = 20, num2 = 10;
	int result;

	result = 1 && 1;
	printf("result1: %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result2: %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("result3: %d\n", result);

	result = num1 < num2 || num1 != num2;
	printf("result4: %d\n", result); // 1

	printf("! 연산자: %d\n", !result);

	printf("--------------------------------------\n");

	// 삼항연산자
	// 조건식?조건이 참일 때 반환할 값: 조건이 거짓일 때 반환할 값;
	// 조건식 → 결과가 참이나 거짓으로 반환되는 식
	// 비교연산자, 논리연산자 

	int num, absolute;
	printf("정수 입력: ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("절대값: %d\n", absolute);

	printf("--------------------------------------\n");

	// 사용자로부터 나이와 키를 입력받아 나이가 12살 이상이고
	// 키가 120cm 이상일 때만 놀이기구에 탑승할 수 있도록
	// 허용하는 프로그램 만들기
	// ex) 나이를 입력하세요: 15
	// ex) 키를 입력하세요: 160
	// ex) "놀이기구에 탑승할 수 있습니다" 출력
	// ex) 다만 조건이 부합하지 않으면 "놀이기구에 탑승할 수 없습니다" 출력

	int age, height;
	printf("키를 입력하세요: ");
	scanf("%d", &height);
	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	printf("%s\n", age >= 12 && height >= 120 ? "놀이기구에 탑승할 수 있습니다." : "놀이기구에 탑승할 수 없습니다.");
}
