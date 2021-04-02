/*#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<string> h;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		h.insert(tmp);
	}
	vector<string> v;
	int num = 0;
	for (int i = 0; i < m; i++) {
		string tmp2;
		cin >> tmp2;
		auto a =h.find(tmp2);
		if (a != h.end()) {
			num++;
			v.push_back(tmp2);
		}
	}
	sort(v.begin(), v.end());
	cout << num << '\n';
	for (auto i : v) {
		cout << i << '\n';
	}

}*/