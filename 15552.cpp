#include "iostream"
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int a, b;
	while (n--) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}
