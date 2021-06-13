//#include <iostream>
//#include <vector>
//using namespace std;
//
//int board[10][10];
//int ansBoard[10][10];
//vector<pair<int, int>> answer;
//
//bool check(int x, int y) {
//	int rowT[10];
//	int colT[10];
//	int boxT[10];
//	for (int i = 0; i <= 9; i++) {
//		rowT[i] = 0;
//		colT[i] = 0;
//		boxT[i] = 0;
//	}
//
//	for (int i = 0; i < 9; i++) {
//		rowT[board[x][i]]++;
//		colT[board[i][y]]++;
//	}
//	int ax = (x / 3)*3;
//	int ay = (y / 3)*3;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			boxT[board[ax+i][ay+j]]++;
//		}
//	}
//	for (int i = 1; i <= 9; i++) {
//		if (rowT[i] >= 2)return false;
//		if (colT[i] >= 2)return false;
//		if (boxT[i] >= 2)return false;
//	}
//	return true;
//}
//
//void go(int index) {
//	if (answer.size() == index) {
//		int sum = 0;
//		for (int i = 0; i < 9; i++) {
//			for (int j = 0; j < 9; j++) {
//				sum += board[i][j];
//			}
//		}
//		for (int i = 0; i < 9; i++) {
//			for (int j = 0; j < 9; j++) {
//				ansBoard[i][j] = board[i][j];
//			}
//		}
//		return;
//	}
//	int x = answer[index].first;
//	int y = answer[index].second;
//	for (int i = 1; i < 10; i++) {
//		board[x][y] = i;
//		if (check(x, y) == false) {
//			board[x][y] = 0;
//			continue;
//		}
//		go(index + 1);
//		board[x][y] = 0;
//	}
//	
//
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 0)answer.push_back({ i,j });
//		}
//	}
//	go(0);
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			cout << ansBoard[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}