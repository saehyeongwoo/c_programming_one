// 간단한 계산을 해보자

#include <stdio.h>

int main() {
	printf("5 + 10 = %d\n", 5 + 10);
	printf("5 - 10 = %d\n", 5 - 10);
	printf("5 x 10 = %d\n", 5 * 10);

	// 5를 10으로 나누면 0.5가 되어야하는데 int형이라 잘림. 이를 float으로 바꾸는 방법 설명
	printf("5 / 10 = %d\n", 5 / 10);

	// 나머지 연산자 문자열로 사용하는 방법 설명
	printf("5 %% 10 = %d\n", 5 % 10);

	return 0;
}