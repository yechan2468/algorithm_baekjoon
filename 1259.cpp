#include <iostream>
#include <string>
using namespace std;

// https://www.acmicpc.net/problem/1259

bool isPanlindrome(string word);

int main() {
	string n;
	while (true) {
		cin >> n;
		if (n == "0") break;
		if (isPanlindrome(n)) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}

bool isPanlindrome(string word) {
	string::iterator begin = word.begin();
	string::iterator end = word.end() - 1;
	for (int i=0; i<word.length()/2+1; i++) {
		if (*begin != *end) return false;
		begin++;
		end--;
	}
	return true;
}
