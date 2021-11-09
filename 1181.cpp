#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

// boj.kr/1181

bool compare(string a, string b);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	set<string, decltype(compare)*> words(compare);
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		words.insert(s);
	}
	
	for (string word: words)
		cout << word << '\n';
	return 0;
}

bool compare(string a, string b) {
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}
