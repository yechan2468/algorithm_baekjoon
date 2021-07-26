#include "iostream"
using namespace std;

int main() {
	int chessPieces[6] = {1, 1, 2, 2, 2, 8};
	for (int i=0; i<6; i++) {
		int numPiece;
		cin >> numPiece;
		cout << chessPieces[i] - numPiece << " ";
	}
	return 0;
}
