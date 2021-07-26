#include <stdio.h>

int main() {
	int row1, col1, row2, col2;
	scanf("%d %d %d %d", &row1, &col1, &row2, &col2);
	printf("%d", row1*col1 + row2*col2);
	return 0;
}
