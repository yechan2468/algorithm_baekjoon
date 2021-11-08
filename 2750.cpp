#include <iostream>
using namespace std;

// boj.kr/2750

void swap(int* a, int* b);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++)
		cin >> arr[i];

	int cnt = n-1;
	for (int i=0; i<n; i++) {
		for (int j=0; j<cnt; j++)
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		cnt--;
	}

	for (int i=0; i<n; i++)
		cout << arr[i] << '\n';
	return 0;
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
