#include <iostream>
#include <string>
#include <climits>
using namespace std;

// https://www.acmicpc.net/problem/1018

int countTilesRepainted(string board[50], int rowBegin, int colBegin);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int row, col;
	cin >> row >> col;
	string board[50];
	for (int i=0; i<row; i++) {
		cin >> board[i];
	}
	
	int min = INT_MAX;
	for (int rowBegin=0; rowBegin<=row-8; rowBegin++) {
		for (int colBegin=0; colBegin<=col-8; colBegin++) {
			int temp = countTilesRepainted(board, rowBegin, colBegin);
			min = (temp < min)? temp : min;
		}
	}
	cout << min;
	return 0;
}

int countTilesRepainted(string board[50], int rowBegin, int colBegin) {
	string pattern[] = {"WBWBWBWB", "BWBWBWBW"};
	int cnt1 = 0, cnt2 = 0;
	for (int i=rowBegin; i<rowBegin+8; i++) {
		for (int j=colBegin; j<colBegin+8; j++) {
			if (board[i].at(j) == pattern[i%2].at(j-colBegin)) cnt1++;
			if (board[i].at(j) == pattern[(i+1)%2].at(j-colBegin)) cnt2++;
		}
	}
	return (cnt1<cnt2)? cnt1 : cnt2;
}
