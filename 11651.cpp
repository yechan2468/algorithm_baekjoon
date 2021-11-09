#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// boj.kr/11651

bool compare(pair<int, int> a, pair<int, int> b);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int, int>> points;
	for (int i=0; i<n; i++) {
		int x, y;
		cin >> x >> y;
		points.push_back(make_pair(x,y));
	}
	
	sort(points.begin(), points.end(), compare);
	
	for (auto point: points)
		cout << point.first << ' ' << point.second << '\n';
	return 0;
}

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}
