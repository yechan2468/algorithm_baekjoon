#include "iostream"
#include "string"
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string result;
	int n;
	cin >> n;

	while (n--) {
		int times;
		string s;
		cin >> times >> s;
		for (string::iterator iter=s.begin(); iter<s.end(); iter++) {
			for (int i=0; i<times; i++) result += *iter;
		}
		result += '\n';
	}
	
	cout << result;
	return 0;
}
