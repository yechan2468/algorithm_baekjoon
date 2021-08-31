#include <iostream>
using namespace std;

// https://www.acmicpc.net/problem/1436

bool is666Included(int num);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int num;
	cin >> num;
	
	int result[10001];
	int cnt = 1, temp;
	for (int i=0; cnt<=num; i++) {
		if (is666Included(i)) {
			result[cnt] = i;
			cnt++;
		}
	}
	
	cout << result[num];
	return 0;
}

bool is666Included(int num) {
	while (num >= 666) {
		if (num % 1000 == 666) return true;
		num /= 10;
	}
	return false;
}
