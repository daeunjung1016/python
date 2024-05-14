#include <stdio.h>

void main() {
	// if문의 중첩
	// if문은 그 자체로 하나의 구문이기 때문에 if문의 중괄호 안에서
	// if문을 다시 정의하는 것이 가능하다

	// if(조건식1) {
	//	  if(조건식2) {
	//		   조건식1과 조건식2가 참일 때 실행할 명령;
	//	  } 
	// }

	// 나이가 12살 이상이고 키가 120cm 이상이어야 
	// 놀이기구를 탈 수 있다

	int age, height;
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("키를 입력하세요: ");
	scanf("%d", &height);
	if (age >= 12) {
		if (height >= 120) {
			printf("놀이기구를 탈 수 있습니다");
		}
	else {
		printf("놀이기구를 탈 수 없습니다");
		}
	}
}