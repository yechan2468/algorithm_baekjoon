#include <stdio.h>

// boj.kr/2438

int main() {
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		for (int j=0; j<i; j++)
			printf("*");
		printf("\n");
	}
}
