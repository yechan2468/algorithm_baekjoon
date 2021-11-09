#include <iostream>
#include <cmath>
using namespace std;

// boj.kr/2108

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int count[8001];
	int sum = 0;
	for (int i=0; i<8001; i++)
		count[i] = 0;
	
	for (int i=0; i<n; i++) {
		int num;
		cin >> num;
		sum += num;
		(count[num+4000])++;
	}	
	int min = 4001, max = -4001;
	float mean = round((float)sum / n);
	int median, mode;
	sum = 0;
	
	/*
	for (int i=0; i<8001; i++) {
		sum += count[i];
		if (sum >= n/2+1)
			median = i - 4001;
		if (count[i] > count[mode+4000])
			mode = i - 4000;
		if (count[i] != 0 && i > max)
			max = i - 4000;
		else if (count[i] != 0 && i < min)
			min = i - 4000;
	}
	*/
	
	cout << mean << '\n';
	cout << median << '\n';
	cout << mode << '\n';
	cout << max - min << '\n';
	return 0;
}
