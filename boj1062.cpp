/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
int k, n,m;
char anta[5] = { 'a','n','t','c','i' };
bool alpha[26];
vector<string> v;
int ans = -1;
void go(int index, int prev) {
	if (index == m) {
		int count = 0;
		for (int i = 0; i < k; i++) {
			bool check = true;
			for (int j = 0; j < v[i].size(); j++) {
				int tmp = v[i][j] - 'a';
				if (alpha[tmp] == false) {
					check = false;
					break;
				}
			}
			if (check)count++;
		}
		if (ans < count)ans = count;
		return;
	}
	if (index>m)return;
	for (int next = prev + 1; next < 26; next++) {
		if (alpha[next] == true)continue;
		alpha[next] = true;
		go(index + 1, next);
		alpha[next] = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> k >> n;
	if (n < 5) {
		cout << 0 << '\n';
		return 0;
	}
	else {
		for (int i = 0; i < k; i++) {
			string tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		for (int i = 0; i < 5; i++) {
			int tmp = anta[i] - 'a';
			alpha[tmp] = true;
		}
		m = n - 5;
		go(0, -1);
		cout << ans << '\n';
	}
}*/