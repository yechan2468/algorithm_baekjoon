#include "iostream"
#include "string"
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int result = 0;
	string s;
	cin >> s;

	int time[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	for (int i=0; i<s.length(); i++) {
		result += time[s[i] - 'A'];
	}
	
	cout << result;
	return 0;
}
