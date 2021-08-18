#include "iostream"
#include "vector"
#include "tuple"
using namespace std;

// boj.kr/9020

vector<int> getPrimes(const int num);
tuple<int, int> getGoldbachPartition(const vector<int>& primes, const int evenNum);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	
	// 골드바흐의 추측:
	// 2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 추측.
	// 위 조건을 만족하는 짝수를 골드바흐 수라고 한다.
	// 그리고, 두 소수의 합으로 나타내는 표현을 그 골드바흐 수의 골드바흐 파티션이라고 한다.
	// 아래에서는 2 < x <= 10000인 짝수 x에 대해 골드바흐 파티션을 구한다.
	// Goldbach's conjecture:
	// for ∀x(x=2n for n∋N, x>2), x=a+b(a:prime number, b:prime number)
	// x is called 'Goldbach number'; (a, b) is called 'Goldbach partition'.
	// This program finds Goldbach partition of x(2<x<=10000)
	vector<int> primes = getPrimes(10000);
	while (N--) {
		int evenNum, part1, part2;
		cin >> evenNum;
		
		tie(part1, part2) = getGoldbachPartition(primes, evenNum);
		cout << part1 << ' ' << part2 << '\n';
	}
	return 0;
}

vector<int> getPrimes(const int num) {
	vector<int> primes;
	bool nums[num+1];
	for (int i=2; i<=num; i++) {
		nums[i] = true;
	}

	// the sieve of eratosthenes
	for (int i=2; i*i<=num; i++) {
		if (nums[i] == false) continue;
		for (int j=i+i; j<=num; j+=i) {
			nums[j] = false;
		}
	}
	
	for (int i=2; i<=num; i++) {
		if (nums[i]) primes.push_back(i); 
	}
	return primes;
}

tuple<int, int> getGoldbachPartition(const vector<int>& primes, const int evenNum) {
	// find index
	auto iter = primes.begin();
	for (iter; iter<primes.end(); iter++) {
		if (*iter > (evenNum/2)) break;
	}
	// find Goldbach partition using index(iter)
	for (iter; iter!=primes.begin(); iter--) {
		for (int i=0; ; i++) {
			int sum = *iter + *(iter+i);
			if (sum == evenNum) {
				return make_tuple(*iter, *(iter+i));
			} else if (sum > evenNum) {
				break;
			} else continue;
		}
	}
}
