#include <stdio.h>

void main() {
	// switch문
	// 다양한 조건을 검사할 수 있게 만들어 놓은 것으로
	// 하나의 변수나 수식에 대한 다양한 조건을 검사할 때 사용
	// 조건값 case1, case2 기입할 때는 case와 숫자 사이를 띄워야 한다

	// switch(비교값) {
	//   case 조건값1:
	//		 실행할 명령;
	//		 break;
	//   case 조건값2:
	//		 실행할 명령;
	//		 break;
	//   case 조건값3:
	//		 실행할 명령;
	//		 break;
	//   case 조건값4:
	//		 실행할 명령;
	//		 break;
	// }

	int option;
	printf("숫자 입력: ");
	scanf("%d", &option);
	switch (option) {
	case 1: 
		printf("게임시작\n");
		break;
	case 2:
		printf("게임설정\n");
		break;
	case 3:
		printf("게임종료\n");
		break;
	}

	// switch문의 비교값에는 정수(int)와 문자형(char) 타입만
	// 들어갈 수 있다 (실수 X, 문자열 X)
	switch ('a') {
	case 'a':
		printf("a를 선택하셨습니다\n");
		break;
	default:
		// 비교값과 일치하는 조건값이 하나도 없을 때 사용(dafault)
		printf("잘못 선택하셨습니다\n");
		break;
	}

	printf("----------------------\n");

	// 아래와 같이 1, 3, 5는 홀수 2, 4, 6은 짝수라는 출력값을 실행하는 구문 작성시
	// 하나마다 printf, break를 걸면 너무 번잡하다

	//int num;
	//printf("정수를 입력하세요: ");
	//scanf("%d", &num);

	//switch (num) {
	//case 1:
	//	printf("홀수입니다\n");
	//	break;
	//case 3:
	//	printf("홀수입니다\n");
	//	break;
	//case 5:
	//	printf("홀수입니다\n");
	//	break;
	//case 2:
	//	printf("짝수입니다\n");
	//	break;
	//case 4:
	//	printf("짝수입니다\n");
	//	break;
	//case 6:
	//	printf("짝수입니다\n");
	//	break;
	//}

	// 아래와 같이 1, 3, 5는 홀수 2, 4, 6은 짝수라는 출력값을 실행하는 구문 작성시
	// 하나마다 printf, break를 걸면 너무 번잡하다
	// 하여 다음과 같이 기입할 수 있다

	int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
	case 3:
	case 5:
		printf("홀수입니다\n");
		break;
	case 2:
	case 4:
	case 6:
		printf("짝수입니다\n");
		break;
	}

	// if vs switch
	// if문: 범위를 가진 조건을 비교할 때 좋음

	// ex) 100점 ~ 90점 > A라고 기입하고 싶을 때

	//int score;
	//if (score >= 90) printf('A');

	//switch (score) {
	//case 100:
	//case 99:
	//case 98:
	//case 97:

	// 위만 봐도 if가 훨씬 효율적

	// switch: 특정 값을 비교할 때 사용하면 좋음
	// ex) 메뉴 선택 시


	}
}