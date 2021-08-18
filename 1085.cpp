#include "iostream"
using namespace std;

// boj.kr/1085

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int d1 = (w-x<x)? w-x : x;
	int d2 = (h-y<y)? h-y : y;
	
	cout << ((d1<d2)? d1 : d2);
	return 0;
}
