#include <stdio.h>
#include "string"
using namespace std;

int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	string mul = to_string(num1*num2*num3);

	int digitCount[10] = {0,};
	for (string::iterator iter=mul.begin(); iter<mul.end(); iter++) {
		digitCount[*iter-'0']++;
	}

	for (int i=0; i<10; i++) {
		printf("%d\n", digitCount[i]);
	}
	return 0;
}
