/*#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int n = str.size()-1;
	bool ok = true;
	for (int i = 0; i < str.size() / 2; i++) {
		if (str[i] != str[n-i]) {
			ok = false;
			break;
		}
	}
	if (ok)cout << 1 << '\n';
	else cout << 0 << '\n';
}*/