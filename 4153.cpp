#include <stdio.h>
#include <stdbool.h>

// boj.kr/4153

int main() {
	int a, b, c;
	while (true) {
		scanf("%d%d%d", &a, &b, &c);
		if (!a) break;
		int aSqr=a*a, bSqr=b*b, cSqr=c*c;
		
		bool cond = (
				aSqr + bSqr == cSqr
			|| aSqr + bSqr == - cSqr
			|| aSqr - bSqr == cSqr
			|| aSqr - bSqr == - cSqr
		);
		if (cond) printf("right\n");
		else printf("wrong\n");
	}
	return 0;
}
