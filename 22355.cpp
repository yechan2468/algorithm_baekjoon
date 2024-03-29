// UCPC 2021 대회 E번 문제

#include "iostream"
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, beauty;
    cin >> n >> beauty;
    int h[n], fUp[n], fDn[n];
    int minH=1000000, maxH=0;
    // 배열 초기화
    for (int i=0; i<n; i++) {
        cin >> h[i];
        if (h[i] < minH) minH=h[i];
        if (h[i] > maxH) maxH=h[i];
    }
    for (int i=0; i<n; i++) {
        cin >> fUp[i];
    }
    for (int i=0; i<n; i++) {
        cin >> fDn[i];
    }
    
    int minResult = 2147483647;
    for (int H=minH; H<maxH+1; H++) {
        int fSum[n];
        for (int i=0; i<n; i++) { // fSum 초기화
            fSum[i] = 0;
        }
        for (int i=0; i<n; i++) {
            int deviation = h[i]-H;
            fSum[i] = deviation>=0? deviation*fDn[i] : -deviation*fUp[i];
        }
        // H에 따른 result 구하기
        int result = 0;
        for (int i=0; i<beauty; i++) {
            result += fSum[i];
        }
        for (int i=0; i<n-2; i++) {
            if (result < minResult) {
                minResult = result;
            }
            result = result - fSum[i] + fSum[i+beauty];
        }
    }

    cout << minResult; 
    return 0;
}
