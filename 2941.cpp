#include "iostream"
#include "string"
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int result = 0;
	string s;
	cin >> s;
	
	for (string::reverse_iterator iter=s.rbegin(); iter<s.rend(); iter++) {
		switch (*iter) {
			case '=':
			case '-':
				result++; // [a-z]-, [a-z]=
				iter++;
				if (*iter == 'z') {
					if (*(iter+1) == 'd') iter++; // dz=
				}
			break;
			case 'j':
				result++;
				if (*(iter+1) == 'l' || *(iter+1) == 'n') iter++; // lj, nj
			break;
			default:
				result++;
		}
	}
	
	cout << result;
	return 0;
}
