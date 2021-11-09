#include <iostream>
using namespace std;

// boj.kr/10989
// The below is an implementation of counting sort

#include <iostream>
#include <stack>
using namespace std;

// boj.kr/10989
// The below is an implementation of counting sort

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	const int RANGE = 10000;
	int count[RANGE+1];
	for (int i=1; i<=RANGE; i++)
		count[i] = 0;
	
	for (int i=0; i<n; i++) {
		int num;
		cin >> num;
		(count[num])++;
	}
	
	for (int i=1; i<RANGE+1; i++)
		while (count[i]--)
			cout << i << '\n';
	return 0;
}

/*
previous version of counting sort.
아래처럼 데이터를 배열에 담아서 output 배열을 출력하는 방법도 가능은 하지만,
그 방법보다는 위처럼 배열을 쓰지 않고 메모리를 절약하는 방법이 훨씬 좋다.
위 방법에서는 입력 데이터를 담는 input 배열과 출력하기 위한(cout) 데이터를 담는 output 배열이 모두 필요 없고,
n이 얼마나 크던지 상관 없이 10001개의 정해진 크기의 배열만이 필요하다.
정렬해야 하는 수의 범위가 10000 이하이므로 위와 같은 방법이 가능해진다.

결론적으로, 정렬을 할 때 정렬 대상이 되는 모든 데이터를 배열에 꼭 담아야 하는 것은 아니다.

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	const int RANGE = 10000;
	int input[n];
	int count[RANGE+1];
	int output[n];
	for (int i=1; i<=RANGE; i++)
		count[i] = 0;
	
	for (int i=0; i<n; i++) {
		int num;
		cin >> num;
		input[i] = num;
		(count[num])++;
	}
	for (int i=1; i<=RANGE-1; i++) {
		count[i+1] += count[i];
	}
	for (int i=0; i<n; i++) {
		int val = input[i];
		int idx = (count[val])--;
		output[idx-1] = val;
	}
	for (int i=0; i<n; i++)	
		cout << output[i] << '\n';
	return 0;
}
*/
