#include <iostream>
using namespace std;

// https://www.acmicpc.net/problem/7568

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int weight[N], height[N];
	for (int i=0; i<N; i++) {
		cin >> weight[i] >> height[i];
	}
	
	for (int i=0; i<N; i++) {
		int rank = 1;
		for (int j=0; j<N; j++) {
			if (i == j) continue;
			if (weight[i] < weight[j] && height[i] < height[j]) rank++;
		}
		cout << rank << " ";
	}
	return 0;
}
