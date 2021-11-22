#include <iostream>
#include <deque>
using namespace std;

// boj.kr/2164

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n == 1 || n == 2) {
		cout << n; return 0;
	}
	
	deque<int> dq;
	for (int i=1; i<n+1; i++)
		dq.push_back(i);
	
	while (dq.size() != 1) {
		// delete first element
		dq.pop_front();
		// move first element to the last
		dq.push_back(dq.front());
		dq.pop_front();
	}
	cout << dq.front();
	return 0;
}
