/*#include <iostream>
#include <cstring>
using namespace std;
int n, k;
int cache[1001][1001];
int go(int n, int k) {
	if (n == k)return 1;
	if (k == 0)return 1;
	if (k == 1)return n;
	int& ret = cache[n][k];
	if (ret != -1)return ret;
	ret = 0;
	return ret=(go(n - 1, k)%10007 + go(n - 1, k - 1)%10007)%10007;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	memset(cache, -1, sizeof(cache));
	cout << go(n, k) << '\n';
}*/