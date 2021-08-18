include "iostream"
using namespace std;

// boj.kr/1929

void printPrimes(int begin, int end) {
	begin = (begin==1)? 2 : begin;
	int nums[end+3];
	for (int i=2; i<=end; i++) {
		nums[i] = i;
	}
	
	// the sieve of eratosthenes
	for (int i=2; i*i<=end; i++) {
		if (nums[i] == 0) continue;
		for (int j=i+i; j<=end; j+=i) {
			nums[j] = 0;
		}
	}
	
	for (int i=begin; i<=end; i++) {
		if (nums[i] != 0) {
			cout << i << '\n';
		}
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int begin, end;
	cin >> begin >> end;
	
	printPrimes(begin, end);
	return 0;
}
