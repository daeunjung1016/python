#include <stdio.h>

void main() {
	// 다차원배열
	// 2차원 이상의 배열을 의미하여 배열의 요소가
	// 선형적으로 나열되어 있는 1차원 배열과는 구조가 다르다
	
	// 1차원 배열은 요소로서 데이터를 가진다
	// 2차원 배열은 요소로서 1차원 배열을 가진다

	// 2차원 배열의 선언
	// 자료형 배열명 [1차원 배열의 개수][1차원 배열 내 요소의 개수];
	int arr[2][3] = { {1,2,3}, {4,5,6} };

	// 2차원 배열 요소의 접근
	printf("%d\n", arr[0][0]);
	printf("%d\n", arr[0][1]);
	printf("%d\n", arr[0][2]);
	printf("%d\n", arr[1][0]);
	printf("%d\n", arr[1][1]);
	printf("%d\n", arr[1][2]);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------------\n");
	// 2차원 배열 iArr의 총합과 평균을 구하세요
	int iArr[][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20} };
	int total = 0;
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			total += iArr[i][j];
			count++;
		}
	}
	double avg = (double)total / count;
	printf("총합: %d\n", total);
	printf("평균: %.1lf\n", avg);
}