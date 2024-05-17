#include <stdio.h>

void main() {
	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			printf("%d %d\n", i, j);
		}
	}

	printf("----------------------------\n");
	// 1 1 1 
	// 1 1 1 
	// 1 1 1

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", 1);
		}
		printf("\n");
	}

	printf("----------------------------\n");
	// 1 2 3 4 
	// 1 2 3 4
	// 1 2 3 4

	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 5; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	printf("----------------------------\n");
	// 1 2 3 4 
	// 5 6 7 8 
	// 9 10 11 12
	// 를 출력하시오

	int num = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%02d ", num++);
		}
		printf("\n");

	// 두 번째 방법
	//for (int i = 1;  i < 2; i++) {
	//	for (int j = 1; j < 5; j++) {
	//		printf("%d ", j);
	//	}
	//	printf("\n");
	//	for (int k = 5; k < 9; k++) {
	//		printf("%d ", k);
	//	}
	//	printf("\n");
	//	for (int h = 9; h < 13; h++) {
	//		printf("%d ", h);
	//	}
	//	printf("\n");
	}

	printf("----------------------------\n");
	// A B C D
	// A B C D
	// A B C D
	// 를 출력하시오

	// ASCII코드를 알아야 하는 문제
	// 몰라도 두 번째처럼 하면 된다

	for (int i = 0; i < 3; i++) {
		for (int j = 65; j < 69; j++) {
			printf("%c ", (char)j);
		}
		printf("\n");
	}

	printf("----------------------------\n");
	for (int i = 0; i < 3; i++) {
		for (char j = 'A'; j < 'E'; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}

	printf("----------------------------\n");
	// A B C D
	// E F G H
	// I J K L
	// 를 출력하시오

	char alpha = 'A';
	for (int i = 0; i < 3; i++) {
		for (char j = 'A'; j < 'E'; j++) {
			printf("%c ", alpha++);
		}
		printf("\n");
	}
}