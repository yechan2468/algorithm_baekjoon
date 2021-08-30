#include <stdio.h>
#include <math.h>
using namespace std;

// https://www.acmicpc.net/problem/15829

unsigned long long myHash(char* input, int len);

int main() {
	int len;
	scanf("%d", &len);
	char input[len];
	scanf("%s", input);
	
	printf("%llu", myHash(input, len));
	return 0;
}

unsigned long long myHash(char* input, int len) {
	const int MOD = 1234567891;
	const int R = 31;
	unsigned long long r_i = 1;
	unsigned long long sum = 0;
	
	for (int i=0; i<len; i++) {
		sum += ((input[i]-'a'+1) * r_i) % MOD;
		sum %= MOD;
		r_i *= R;
		r_i %= MOD;
	}
	return sum;
}
