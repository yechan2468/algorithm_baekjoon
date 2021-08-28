#include <stdio.h>
#include <stdbool.h>

// boj.kr/2447

bool grid[2187][2187];

void drawPattern(int lines, int row, int col);
void printPattern(int lines);

int main() {
	int lines;
	scanf("%d", &lines);
	for (int i=0; i<lines; i++)
		for (int j=0; j<lines; j++)
			grid[i][j] = false;
	
	drawPattern(lines, 0, 0);
	printPattern(lines);
	return 0;
}

void drawPattern(int lines, int row, int col) {
	if (lines == 1) {
		grid[row][col] = true;
		return;
	}
	for (int i=row; i<row+lines; i+=(lines/3)) {
		for (int j=col; j<col+lines; j+=(lines/3)) {
			if (i==row+lines/3 && j==col+lines/3) continue;
			drawPattern(lines/3, i, j);
		}
	}
}

void printPattern(int lines) {
	for (int i=0; i<lines; i++) {
		for (int j=0; j<lines; j++) {
			if (grid[i][j]) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
