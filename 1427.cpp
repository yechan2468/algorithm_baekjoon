#include <iostream>
#include <algorithm>
using namespace std;

// boj.kr/1427

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	
	sort(s.begin(), s.end());
	
	for (string::reverse_iterator iter=s.rbegin(); iter<s.rend(); iter++)
		cout << *iter;
	return 0;
}
