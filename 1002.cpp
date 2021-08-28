#include <stdio.h>
#include <math.h>

// boj.kr/1002

int getContacts(int x1, int y1, int r1, int x2, int y2, int r2);

int main() {
	int N;
	scanf("%d", &N);
	
	while (N--) {
		int x1, y1, r1, x2, y2, r2;
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		printf("%d\n", getContacts(x1, y1, r1, x2, y2, r2));
	}
	return 0;
}

int getContacts(int x1, int y1, int r1, int x2, int y2, int r2) {
	double d = sqrt(pow(double(x2-x1),2)+pow(double(y2-y1),2));
	if (d == 0) {
		if (r1 == r2) return -1;
		else return 0;
	} else if (d>r1 && d>r2) {
		if (d > r1+r2) return 0;
		else if (d == r1+r2) return 1;
		else return 2;
	} else {
		if (abs(r2-r1) > d) return 0;
		else if (abs(r2-r1) == d) return 1;
		else return 2;
	}
}
