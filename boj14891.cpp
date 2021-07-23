/*#include <iostream>
using namespace std;

int Clock[4][8];
bool visited[4];
bool visited2[4];
bool Ro[4];
void rotate(int index,int ca) {
	if (ca == 1) {
		int tmp = Clock[index][7];
		for (int i = 6; i >=0; i--) {
			Clock[index][i + 1] = Clock[index][i];
		}
		Clock[index][0] = tmp;
	}
	else {
		int tmp = Clock[index][0];
		for (int i = 0; i < 7; i++) {
			Clock[index][i] = Clock[index][i + 1];
		}
		Clock[index][7] = tmp;
	}
}
void checkRotate(int index,int lr) {
	if (index == 4 || index == -1) {
		return;
	}
	if (visited2[index] == true)return;
	visited2[index] = true;
	int nowleft, nowright, left, right;
	nowleft = Clock[index][6];
	nowright = Clock[index][2];
	left = Clock[index - 1][2];
	right = Clock[index + 1][6];
	if (lr == 0) {
		if (nowright != right)Ro[index] = true;
	}
	else if (lr == -1) {

	}
	else {
		if (nowleft != left)Ro[index] = true;
	}
	checkRotate(index + 1, 1);
	checkRotate(index - 1, 0);
}
void go(int index,int ca,int lr) {

	if (index == 4||index==-1) {
		return;
	}
	if (visited[index] == true)return;
	visited[index] = true;
	rotate(index, ca);
	if (Ro[index-1]==true) {
		int na = 1 - ca;
		go(index - 1, na, 0);
	}
	if (Ro[index+1]==true) {
		int na = 1 - ca;
		go(index + 1, na, 1);
	}
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 8; j++) {
			char tmp;
			cin >> tmp;
			if (tmp == '1') {
				Clock[i][j] = 1;
			}
			else {
				Clock[i][j] = 0;
			}
			
		}
	}
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		if (b == -1) {
			b = 0;
		}
		for (int i = 0; i < 4; i++) {
			visited[i] = false;
			visited2[i] = false;
			Ro[i] = false;
		}

		checkRotate(a - 1, -1);
		go(a - 1, b, -1);
	}
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		if (Clock[i][0] == 1) {
			sum += (1<<i);
		}
	}
	cout << sum << '\n';
}*/