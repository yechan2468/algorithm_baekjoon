#include "iostream"
#include "cmath"
#include "vector"
#include "algorithm"
#include "numeric"
using namespace std;

// boj.kr/2581

bool isPrimeNumber(int n) {
	if (n==1) return false;
	if (n==2) return true;
	for (int i=2; i<int(sqrt(n))+1; i++) {
		if (n%i == 0) return false; 
	}
	return true;
}

int main() {
	int begin, end;
	cin >> begin >> end;
	vector<int> primes;
	
	for (int i=begin; i<=end; i++) {
		if (isPrimeNumber(i)) primes.push_back(i);
	}
	if (primes.size() == 0) {
		cout << -1;
		return 0;
	}
	cout << accumulate(primes.begin(), primes.end(), 0) << '\n' 
		<< *min_element(primes.begin(), primes.end());
	return 0;
}
