#include <stdio.h>

void main() {
	// 과수원이 있다
	// 과수원에서는 하루에 사과, 배, 오렌지를 각각 5, 7, 5를 생산한다
	// 1. 하루에 생산되는 과일의 총 개수를 구하세요
	 
	// 2. 한시간당 생산되는 과일의 총 개수를 구하세요
	
	int apple = 5, pear = 7, orange = 5;
	int total = apple + pear + orange;
	printf("총 개수: %d개\n", total);
	double hour = (double)total / 24;
	printf("1시간당 생산량: %f", hour);

	// 기본적으로 연산은 두 피연산자의 타입이 일치해야 연산이 가능
	// 컴퓨터는 서로 다른 타입을 계산하지 못하므로
	// 값의 손실이 적은 쪽으로 타입을 맞춰 준다
	// float + int → float + float → float
	// double + int → double + double → double
	// 이것을 산술 변환이라고 함


}