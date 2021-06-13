/*#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	priority_queue<int> pq1;
	priority_queue< int, vector<int>, greater<int> > pq2;
	while (n--) {
		int tmp;
		cin >> tmp;
		int pq1size = pq1.size();
		int pq2size = pq2.size();
		if (pq1size > pq2size) {
			if (pq2size == 0) {
				int pq1top = pq1.top();
				if (pq1top <= tmp) {
					pq2.push(tmp);
				}
				else {
					pq1.pop();
					pq2.push(pq1top);
					pq1.push(tmp);
				}
			}
			else {
				int pq1top = pq1.top();
				int pq2top = pq2.top();
				if (pq1top <= tmp && tmp <= pq2top) {
					pq2.push(tmp);
				}
				else if (tmp < pq1top) {
					pq2.push(pq1top);
					pq1.pop();
					pq1.push(tmp);
				}
				else {
					pq2.push(tmp);
				}
			}
		}
		else if (pq1size == pq2size) {
			if (pq1size == 0)pq1.push(tmp);
			else {
				int pq1top = pq1.top();
				int pq2top = pq2.top();
				if (pq2top >= tmp) {
					pq1.push(tmp);
				}
				else {
					pq2.pop();
					pq2.push(tmp);
					pq1.push(pq2top);
				}
			}
		}
		cout << pq1.top() << '\n';
	}
}*/