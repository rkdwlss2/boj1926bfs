/*#include <iostream>
#include <deque>
using namespace std;
deque<int> dq;

int left(int target,int mod) {
	int count = 0;
	while (true) {
		int now = dq.front();
		if (now == target) {
			if (mod == 0) {
				int tc = count;
				while (tc--) {
					int tmp = dq.back();
					dq.pop_back();
					dq.push_front(tmp);
				}
			}
			else {
				dq.pop_front();
			}
			return count;
		}
		else {
			dq.pop_front();
			dq.push_back(now);
			count++;
		}

	}
	return -1;
}

int right(int target, int mod) {
	int count = 0;
	while (true) {
		int now = dq.front();
		if (now == target) {
			if (mod == 0) {
				int tc = count;
				while (tc--) {
					int tmp = dq.front();
					dq.pop_front();
					dq.push_back(tmp);
				}
			}
			else {
				dq.pop_front();
			}
			return count;
		}
		else {
			int t2 = dq.back();
			dq.pop_back();
			dq.push_front(t2);
			count++;
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	int sum = 0;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		int l=left(tmp,0);
		int r = right(tmp,0);
		if (l < r) {
			left(tmp, 1);
			sum += l;
		}
		else {
			right(tmp, 1);
			sum += r;
		}
	}
	cout << sum << '\n';
}*/