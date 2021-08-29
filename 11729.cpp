#include <stdio.h>
#define LEFT 1
#define MID 2
#define RIGHT 3

// boj.kr/11729

int hanoiMoveCount(int plates);
void printHanoiMoves(int plates, int from, int to);

int main() {
	int numPlates;
	scanf("%d", &numPlates);
	printf("%d\n", hanoiMoveCount(numPlates));
	printHanoiMoves(numPlates, LEFT, RIGHT);
	return 0;
}

int hanoiMoveCount(int plates) {
	if (plates == 1) return 1;
	return 2*hanoiMoveCount(plates-1)+1;
}

void printHanoiMoves(int plates, int from, int to) {
	if (plates == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	
	int via = -(from + to - 6);
	printHanoiMoves(plates-1, from, via);
	printHanoiMoves(1, from, to);
	printHanoiMoves(plates-1, via, to);
}
