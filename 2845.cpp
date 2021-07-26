#include "iostream"
using namespace std;

int main() {
	int density, area;
	cin >> density >> area;
	int numPerson = density * area;

	for (int i=0; i<5; i++) {
		int estimated;
		cin >> estimated;
		cout << estimated - numPerson << " ";
	} 
	return 0;
}
