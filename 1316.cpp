#include "iostream"
#include "string"
using namespace std;

bool isGroupWords(string s) {
	bool alphabets[27];
	fill_n(alphabets, 27, false);
	
	char prev = 'z'+1;
	for (string::iterator iter=s.begin(); iter<s.end(); iter++) {
		if (alphabets[*iter-'a'] == true) return false;
		if (prev != *iter) alphabets[prev-'a'] = true;
		prev = *iter;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int result = 0;
	int n;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;
		if (isGroupWords(s)) result++;
	}

	cout << result;
	return 0;
}
