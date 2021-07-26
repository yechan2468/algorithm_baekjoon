#include <stdio.h>

int main() {
	int min, mid;
	scanf("%d\n%d", &min, &mid);
	int max = mid + mid-min;
	printf("%d", max);
	return 0;
}
