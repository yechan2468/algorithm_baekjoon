#include "iostream"
using namespace std;

// boj.kr/1712

int main() {
	unsigned int fixedCost, variableCost, price, breakEvenPoint;
	cin >> fixedCost >> variableCost >> price;
	
	// if price <= variableCost,
	// the net profit cannot be greater than the net cost
	if (price <= variableCost) {
		cout << -1;
		return 0;
	}
	// breakEvenPoint is the mininum market sales which satisfies
	// sales * price >= fixedCost + variableCost*sales
	breakEvenPoint = fixedCost / (price - variableCost) + 1;
	
	cout << breakEvenPoint;
	return 0;
}
