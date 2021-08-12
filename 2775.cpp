#include <stdio.h>

/* 
 * 문제 url: boj.kr/2775
 * 세로축을 층(s)으로, 가로축을 호수(r)로 하는 아파트의 배열을 표 모양으로 생각해보자.
 * 또한, 문제 조건에 지하 1층에 사람이 한명씩 산다는 조건을 추가한다고 하자.
 * 그 표를 시계 방향으로 135도 돌리면 파스칼의 삼각형이 된다.
 * 이때 s층의 r호수에 사는 사람들의 수는 
 * Combination(s+r,s+1) 
 * 이 된다.
 * 아래에서는 그 사실을 이용해 풀이하였다.
 */

// nCk
unsigned int combination(unsigned int n, unsigned int k) {
	if (k*2 > n) k = n-k;
	if (k==0) return 1;
	int result = n;
	for (int i=2; i<=k; ++i) {
		result *= (n-i+1);
		result /= i;
	}
	return result;
}

int main() {
	int N;
	scanf("%d", &N);
	while (N--) {
		int story, roomNo;
		scanf("%d\n%d", &story, &roomNo);
		printf("%d\n", combination(story+roomNo, story+1));
	}
	return 0;
}
