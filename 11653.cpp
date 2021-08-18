#include "iostream"
#include "vector"
using namespace std;

// boj.kr/11653

vector<int> getPrimes(int end) {
	vector<int> primes;
	int nums[end+3];
	for (int i=2; i<=end; i++) {
		nums[i] = i;
	}
	
	// the sieve of eratosthenes
	for (int i=2; i<=end; i++) {
		if (nums[i] == 0) continue;
		for (int j=i+i; j<=end; j+=i) {
			nums[j] = 0;
		}
	}
	
	for (int i=2; i<=end; i++) {
		if (nums[i] != 0) {
			primes.push_back(nums[i]);
		}
	}
	return primes;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int num;
	cin >> num;
	
	vector<int> primes = getPrimes(num);
	for (int i: primes) {
		while (true) {
			if (num%i == 0) {
				num /= i;
				cout << i << '\n';
				continue;
			}
			break;
		}
	}
	return 0;
}
