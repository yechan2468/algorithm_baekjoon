#include <iostream>
#include <algorithm>
using namespace std;

// boj.kr/2751

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);
	
	for (int i=0; i<n; i++)
		cout << arr[i] << '\n';
	return 0;
}
