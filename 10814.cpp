#include <iostream>
#include <vector>
using namespace std;

// boj.kr/10814
/*
 * 나는 merge sort가 stable sort라는 점에 착안해 아래처럼 코드를 짰지만,
 * 이것보다 더 좋은 코드가 있다. 아래에 주석으로 넣는다.
 * 
 * int, string을 pair로 만들어서 모든 사람들을 다 벡터에 저장해놓기보다는,
 * 나이의 범위가 1 이상 200 이하라는 점을 이용하여 name만을 저장하면 된다.
 */

void merge_sort(vector<pair<int, string>> &vec);
void merge(vector<pair<int, string>> &vec, vector<pair<int, string>> &v1, vector<pair<int, string>> &v2);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int, string>> v;
		
	for (int i=0; i<n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}
	
	merge_sort(v);
	
	for (auto &i : v)
		cout << i.first << ' ' << i.second << '\n';
	return 0;
}

void merge_sort(vector<pair<int, string>> &vec) {
	if (vec.size() <= 1)
		return;
	
	auto iter = vec.begin() + vec.size()/2;
	vector<pair<int, string>> v1(vec.begin(), iter);
	vector<pair<int, string>> v2(iter, vec.end());
	
	merge_sort(v1);
	merge_sort(v2);
	vec.clear();
	merge(vec, v1, v2);
}

void merge(vector<pair<int, string>> &vec, vector<pair<int, string>> &v1, vector<pair<int, string>> &v2) {
	int i=0, j=0;
	while (i<v1.size() && j<v2.size()) {
		if (v1.at(i).first <= v2.at(j).first)
			vec.push_back(v1.at(i++));
		else
			vec.push_back(v2.at(j++));
	}
	while (i<v1.size())
		vec.push_back(v1.at(i++));
	while (j<v2.size())
		vec.push_back(v2.at(j++));
}

/*

#include<iostream>
#include<queue>

using namespace std;

queue<string> person[201];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int age;
	string name;

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> age;
		cin >> name;
		person[age].push(name);
	}
	for (int i = 1; i < 201; i++) {
		while (!person[i].empty()) {
			cout << i << ' ' << person[i].front() << '\n';
			person[i].pop();
		}
	}
}

*/
