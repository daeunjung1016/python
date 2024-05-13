// 제어문: 코드의 흐름을 제어, 위에서 아래로-왼쪽에서 오른쪽으로 진행이 됨
// 분기에 따라 실행되는 조건문과 조건하에 반복되는 반복문으로 나눌 수 있음

#include <stdio.h>

void main() {
	// 조건문(분기문)
	// 조건에 따라 코드를 선택적으로 실행시킬 수 있음
	// 종류: if문, switch문

	// if문을 이용한 조건부 실행 / 조건식: 결과가 참, 거짓으로 반환♠비교, 논리♠
	// if(조건식){
	//	 조건식이 참일 때 실행할 명령들;
	// (실행을 하거나 실행하지 않거나 둘 중 하나 / 거짓이면 이 조건문은 씹힘)
	// }

	int num = 3;
	// if문 안에 명령이 한줄일 때 중괄호를 생략할 수 있다
	if (num < 3) printf("num is smaller than 3\n");

	if (num == 3) printf("num is 3\n");

	if (num > 3) printf("num is bigger than 3\n");

	printf("--------------------\n");

	// if - else문
	// 참일 때 실행할 명령, 거짓일 때 실행할 명령;

	// if(조건식) {
	//	 조건이 참일 때 실행할 명령들;
	// } 
	// else {
	//   조건이 거짓일 때 실행할 명령들;
	// }

	char alpha = 'A';
	if (alpha == 'B') printf("alpha is B\n");
	else printf("alpha is not B\n");

	// 나이는 12살 이상이고 키는 120 이상일 때
	// int age, height;
	// if (age >= 12 && height >= 120) {
	//
	// }

	printf("--------------------\n");

	// if - else if - else문
	// 조건을 내가 원하는 만큼 추가할 수 있고, 프로그램의 흐름을
	// 다양하게 분기시킬 수 있음
	// 원하는 만큼 추가할 수 있긴 있으나 지저분하니 적당히..

	// if(조건식) {
	//	 조건식이 참일 때 실행할 명령들;
	// }
	// else if(조건식2) {
	//    조건식이 거짓이고 조건식 2가 참일 때 실행할 명령들;
	// }
	// else if(조건식3) {
	//    조건식1, 2가 거짓이고 조건식 3이 참일 때 실행할 명령들;
	// }
	// else { // 필요 없다면 생략 가능
	//    위의 어느 조건식도 참이 아닐 때 실행할 명령들;
	// }

	//int score = 84;

	//if (score >= 90) {
	//	printf("성적은 A입니다\n");
	//}
	//else if (score >= 80) {
	//	printf("성적은 B입니다\n");
	//}
	//else if (score >= 70) {
	//	printf("성적은 C입니다\n");
	//}
	//else if (score >= 70) {
	//	printf("성적은 D입니다\n");
	//}
	//else {
	//	printf("성적은 F입니다\n");
	//}

	int score = 84;

	if (score >= 90) printf("성적은 A입니다\n");
	else if (score >= 80) printf("성적은 B입니다\n");	
	else if (score >= 70) printf("성적은 C입니다\n");	
	else if (score >= 70) printf("성적은 D입니다\n");	
	else printf("성적은 F입니다\n");
	
	// 아래와 같이 두 조건이 모두 참인 경우, 맨 첫번째 조건식을 제외하고 나머지 조건은 실행하지 않기 때문에 주의

	int number = 3;
	if (number < 5) {
		printf("num은 5보다 작습니다");
	}
	else if (number > 2) {
		printf("num은 2보다 큽니다");
	}
	}

}
