#include <iostream>
using namespace std;

// https://www.acmicpc.net/problem/2231

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	
	for (int i=n-54; i<n; i++) {
		int temp = i, sum = i;
		while (temp) {
			sum += temp%10;
			temp /= 10;
		}
		
		if (sum == n) {
			cout << i; return 0;
		}
	}
	cout << 0;
	return 0;
}
