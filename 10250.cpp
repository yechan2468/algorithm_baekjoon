#include <stdio.h>

// boj.kr/10250

int main() {
	int N;
	scanf("%d", &N);
	// 호텔 건물은 stories층으로, 한 층은 rooms개의 방으로 이뤄져 있다. 
	int stories, rooms, guestNo;
	while (N--) {
		scanf("%d %d %d", &stories, &rooms, &guestNo);
		int floor = ((guestNo-1) % stories) + 1;
		int roomNo = ((guestNo-1) / stories) + 1;
		printf("%d\n", floor*100 + roomNo);
	}
	return 0;
}
