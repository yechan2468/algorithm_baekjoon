#include <iostream>
using namespace std;

// https://www.acmicpc.net/problem/10871

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int count, num;
	cin >> count >> num;
	
	for (int i=0; i<count; i++) {
		int input;
		cin >> input;
		if (input < num) cout << input << " ";
	}
	return 0;
}
