#include <stdio.h>

int main() {
	int result = 0;
	int score;
	for (int i=0; i<5; i++) {
		scanf("%d", &score);
		result += score;
	}
	printf("%d", result);
}
