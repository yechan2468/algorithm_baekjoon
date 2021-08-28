#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// boj.kr/3053

int main() {
	int r;
	scanf("%d", &r);
	printf("%f\n%f", M_PI*pow(r,2), 2*pow(r,2)); 
	return 0;
}
