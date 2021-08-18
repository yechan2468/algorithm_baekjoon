#include <stdio.h>
#include <math.h>

// boj.kr/1978

bool isPrimeNumber(int n) {
	if (n==1) return false;
	if (n==2) return true;
	for (int i=2; i<int(sqrt(n))+1; i++) {
		if (n%i == 0) return false; 
	}
	return true;
}

int main() {
	int N, num, count=0;
	scanf("%d", &N);
	
	while (N--) {
		scanf("%d", &num);
		if (isPrimeNumber(num)) count++;
	}
	
	printf("%d", count);
	return 0;
}
