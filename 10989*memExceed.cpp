#include <iostream>
using namespace std;

// boj.kr/10989
// The below is an implementation of counting sort

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	const int RANGE = 10000;
	int input[n];
	int count[RANGE+1];
	int output[n];
	for (int i=1; i<=RANGE; i++)
		count[i] = 0;
	
	for (int i=0; i<n; i++) {
		int num;
		cin >> num;
		input[i] = num;
		(count[num])++;
	}
	for (int i=1; i<=RANGE-1; i++) {
		count[i+1] += count[i];
	}
	for (int i=0; i<n; i++) {
		int val = input[i];
		int idx = (count[val])--;
		output[idx-1] = val;
	}
	for (int i=0; i<n; i++)	
		cout << output[i] << '\n';
	return 0;
}
