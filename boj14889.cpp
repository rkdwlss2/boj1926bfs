/*#include <iostream>
#include <vector>
using namespace std;
int n;
int board[21][21];
vector<int> v;
vector<int> v2;
bool visited[21];
int answer = 987654321;
int sumF(int lr) {
	int sum = 0;
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n / 2; j++) {
			if (lr == 0) {
				sum += board[v[i]][v[j]];
			}
			else {
				sum += board[v2[i]][v2[j]];
			}
		}
	}
	return sum;
}

void choice(int index,int prev) {

	if (index == n / 2) { 
		for (int i = 0; i < n; i++) {
			if (visited[i] == false) {
				v2.push_back(i);
			}
		}
		int a1 = sumF(0);
		int a2 = sumF(1);
		int bet = a1 - a2;
		if (a2 > a1)bet = a2 - a1;
		if (answer > bet)answer = bet;
		vector<int> v3;
		v2 = v3;
		return; 
	}
	for (int i = prev+1; i < n; i++) {
		if (visited[i] == true)continue;
		visited[i] = true;
		v.push_back(i);
		choice(index + 1,i);
		v.pop_back();
		visited[i] = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	choice(0,-1);
	cout << answer << '\n';
}*/