#include <stdio.h>

// boj.kr/3009

int main() {
	int x1, x2, x3, y1, y2, y3;
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	int x = (x1==x2)? x3 : ((x2==x3)? x1 : x2);
	int y = (y1==y2)? y3 : ((y2==y3)? y1 : y2);
	printf("%d %d", x, y);
	return 0;
}
