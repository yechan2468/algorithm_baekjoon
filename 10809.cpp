#include "iostream"
#include "string"
using namespace std;

int main() {
	string s;
	cin >> s;
	int alphabets[27];
	fill_n(alphabets, 26, -1);

	for (int i=0; i<s.length(); i++) {
		int idx = s[i]-'a';
		if (alphabets[idx] == -1) {
			alphabets[idx] = i;
		}
	}

	for (int i=0; i<26; i++) {
		cout << alphabets[i] << " ";
	}
	return 0;
}
