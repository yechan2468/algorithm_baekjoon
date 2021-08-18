sing namespace std;

// boj.kr/4948

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	// 베르트랑 공준:
	// 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다.
	// 이 프로그램에서는 n에 대해 위 조건을 만족하는 x의 개수를 구해 출력한다.
	// Bertrand's postulate:
	// for arbitrary n ∋ ℕ, ∃ x: x is prime number and n < x <= 2n.
	// (int) n => (void) print(count(x)) which satisfies the condition above.
	while (true) {
		int num, count=0;
		cin >> num;
		if (num == 0) break;
		
		bool nums[2*num+1];
		for (int i=2; i<=2*num; i++) {
			nums[i] = true;
		}

		// the sieve of eratosthenes
		for (int i=2; i*i<=2*num; i++) {
			if (nums[i] == false) continue;
			for (int j=i+i; j<=2*num; j+=i) {
				nums[j] = false;
			}
		}

		for (int i=num+1; i<=2*num; i++) {
			if (nums[i] == true) count++;
		}
		cout << count << '\n';
	}
	
	return 0;
}
