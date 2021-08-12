#include <stdio.h>

// n: 벌집 방에 주어진 주소 번호
// layer: 중앙을 둘러싸는 2~5번 방을 layer1, 8~19번 방을 layer2, ... 라 한다.
int main() {
	long n;
	scanf("%ld", &n);
	unsigned int layer = 1;
	n--;
	while (n>0) {
		n -= layer*6; // 한 layer에 있는 방의 개수는 layer*6
		layer++;
	}
	printf("%d", layer);
	return 0;
}
