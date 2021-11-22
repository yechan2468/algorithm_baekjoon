#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// boj.kr/1920

int exists(vector<int> vec, int num);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> vec;
	for (int i=0; i<n; i++) {
		int num;
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	
	int m;
	cin >> m;
	for (int i=0; i<m; i++) {
		int num;
		cin >> num;
		if (binary_search(vec.begin(), vec.end(), num)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
