#include <stdio.h>

// boj.kr/2439

int main() {
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		int j;
		for (j=0; j<n-i-1; j++) printf(" ");
		for (j; j<n; j++) printf("*");
		printf("\n");
	}
	return 0;
}
