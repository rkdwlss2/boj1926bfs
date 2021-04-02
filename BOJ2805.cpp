/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define lli long long int
lli n, m;
vector<lli> v;
bool check(lli mid) {
	lli sum = 0;
	for (lli i = 0; i < n; i++) {
		if (v[i] - mid > 0) {
			sum += (v[i] - mid);
		}
	}
	return sum >= m;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;

	for (lli i = 0; i < n; i++) {
		lli tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	lli left = 0;
	lli right = 1000000001;
	while (left + 1 != right) {
		lli mid = (left + right) / 2;
		if (!check(mid)) {
			right = mid;
		}
		else {
			left = mid;
		}
	}
	cout << left << '\n';
}*/