#include <stdio.h>

int main() {
	int sum = 0;
	for (int i=0; i<4; i++) {
		int seconds;
		scanf("%d", &seconds);
		sum += seconds;
	}
	printf("%d\n%d", sum/60, sum%60);
	return 0;
}
