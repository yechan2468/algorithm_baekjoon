#include "vector"
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (const int item: a) ans += item;
	return ans;
}
