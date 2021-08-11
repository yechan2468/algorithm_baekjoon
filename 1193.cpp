#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int input;
	scanf("%d", &input);

	int line = ceil((sqrt(1+8*input)-1)/2.0f);
	int pivot = line*(line+1)/2;
	int diff = pivot - input;

	if (line%2 == 0) {
		printf("%d/%d", line-diff, 1+diff);
	} else {
		printf("%d/%d", 1+diff, line-diff);
	}
	return 0;
}
