#include <stdio.h>
#include <math.h>

// boj.kr/2869

int main() {
	unsigned int up, down, h;
	scanf("%u %u %u", &up, &down, &h);
	printf("%d", int(ceil(1 + double(h-up)/(up-down))));
	return 0;
}
