#include <stdio.h>

// 양의 정수 n에 대해서 d(n)을 n과 n의 각 자리수를 더하는 함수라고 정의하자.
// 예를 들어, d(75) = 75+7+5 = 87이다.
int d(int num) {
	int result = num;
	while (num) {
		result += num % 10;
		num /= 10;
	}
	return result;
}

int main() {
	const int N = 10001;
	bool arr[20000];
	for (int i=1; i<N; i++) {
		arr[i] = true;
	}

	for (int i=1; i<N; i++) {
		arr[d(i)] = false;
	}

	for (int i=1; i<N; i++) {
		if (arr[i] == true) {
			printf("%d\n", i);
		}
	}
	return 0;
}
