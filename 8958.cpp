#include "iostream"
#include "string"
using namespace std;

void getScore(string input) {
	int result = 0;
	int count = 0;
	
	for (string::iterator iter=input.begin(); iter<input.end(); iter++) {
		if (*iter == 'O') {
			count++;
			result += count;
		} else {
			count = 0;
		}
	}
	printf("%d\n", result);
}

int main() {
	int n;
	cin >> n;
	string s;
	for (int i=0; i<n; i++) {
		cin >> s;
		getScore(s);
	}
	return 0;
}
