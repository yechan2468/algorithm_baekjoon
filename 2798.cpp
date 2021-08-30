#include <iostream>
using namespace std;

// https://www.acmicpc.net/problem/2798

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int numCard, ceiling;
	cin >> numCard >> ceiling;
	int cards[numCard], max=0;
	for (int i=0; i<numCard; i++) {
		int card;
		cin >> card;
		cards[i] = card;
	}
	
	int a=0,b=0,c=0;
	for (int i=0; i<numCard; i++) {
		for (int j=0; j<numCard; j++) {
			if (i==j) continue;
			for (int k=0; k<numCard; k++) {
				if (j==k || i==k) continue;
				int sum = cards[i] + cards[j] + cards[k];
				if (max<sum && sum<=ceiling) max = sum;
			}
		}
	}
	
	cout << max;
	return 0;
}
