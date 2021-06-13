/*#include <iostream>
#include <string>
using namespace std;
int board[12][9];
int newBoard[12][9];
int rBoard[4][3];

char col[6] = { 'o','w','r','y','g','b' };
char mo[6] = {'U','D','F','B','L','R'};

int state[6][2] = {
	{3,3},{9,3},{6,3},{0,3},{3,0},{3,6}
};
void rotate(int x,int y,int ca) {
	int tmp[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tmp[i][j] = board[x + i][y + j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (ca == 1) {
				board[i + x][j + y] = tmp[j][3 - 1 - i];
			}
			else {
 				board[i + x][j + y] = tmp[3-j-1][i];
			}
		}
	}
}

void bPush(int mod) {
	if (mod == 0) {
		rBoard[0][0] = board[2][3];
		rBoard[0][1] = board[2][4];
		rBoard[0][2] = board[2][5];

		rBoard[1][0] = board[3][6];
		rBoard[1][1] = board[4][6];
		rBoard[1][2] = board[5][6];

		rBoard[2][0] = board[6][5];
		rBoard[2][1] = board[6][4];
		rBoard[2][2] = board[6][3];

		rBoard[3][0] = board[5][2];
		rBoard[3][1] = board[4][2];
		rBoard[3][2] = board[3][2];
	}
	else if (mod == 1) {
		rBoard[0][0] = board[8][3];
		rBoard[0][1] = board[8][4];
		rBoard[0][2] = board[8][5];

		rBoard[1][0] = board[5][8];
		rBoard[1][1] = board[4][8];
		rBoard[1][2] = board[3][8];

		rBoard[2][0] = board[0][5];
		rBoard[2][1] = board[0][4];
		rBoard[2][2] = board[0][3];

		rBoard[3][0] = board[3][0];
		rBoard[3][1] = board[4][0];
		rBoard[3][2] = board[5][0];
	}
	else if (mod == 3) {
		rBoard[0][0] = board[11][3];
		rBoard[0][1] = board[11][4];
		rBoard[0][2] = board[11][5];

		rBoard[1][0] = board[3][8];
		rBoard[1][1] = board[3][7];
		rBoard[1][2] = board[3][6];

		rBoard[2][0] = board[3][5];
		rBoard[2][1] = board[3][4];
		rBoard[2][2] = board[3][3];

		rBoard[3][0] = board[3][2];
		rBoard[3][1] = board[3][1];
		rBoard[3][2] = board[3][0];
	}
	else if (mod == 2) {
		rBoard[0][0] = board[5][3];
		rBoard[0][1] = board[5][4];
		rBoard[0][2] = board[5][5];

		rBoard[1][0] = board[5][6];
		rBoard[1][1] = board[5][7];
		rBoard[1][2] = board[5][8];

		rBoard[2][0] = board[9][5];
		rBoard[2][1] = board[9][4];
		rBoard[2][2] = board[9][3];

		rBoard[3][0] = board[5][0];
		rBoard[3][1] = board[5][1];
		rBoard[3][2] = board[5][2];
	}else if (mod == 4) {
		rBoard[0][0] = board[0][3];
		rBoard[0][1] = board[1][3];
		rBoard[0][2] = board[2][3];

		rBoard[1][0] = board[3][3];
		rBoard[1][1] = board[4][3];
		rBoard[1][2] = board[5][3];

		rBoard[2][0] = board[6][3];
		rBoard[2][1] = board[7][3];
		rBoard[2][2] = board[8][3];

		rBoard[3][0] = board[9][3];
		rBoard[3][1] = board[10][3];
		rBoard[3][2] = board[11][3];
	}else if(mod == 5) {
		rBoard[0][0] = board[2][5];
		rBoard[0][1] = board[1][5];
		rBoard[0][2] = board[0][5];

		rBoard[1][0] = board[11][5];
		rBoard[1][1] = board[10][5];
		rBoard[1][2] = board[9][5];

		rBoard[2][0] = board[8][5];
		rBoard[2][1] = board[7][5];
		rBoard[2][2] = board[6][5];

		rBoard[3][0] = board[5][5];
		rBoard[3][1] = board[4][5];
		rBoard[3][2] = board[3][5];
	}

}


void bPull(int mod) {
	if (mod == 0) {
		board[2][3]=rBoard[0][0];
		board[2][4]=rBoard[0][1];
		board[2][5]=rBoard[0][2];

		board[3][6]=rBoard[1][0] ;
		board[4][6]=rBoard[1][1] ;
		board[5][6]=rBoard[1][2] ;

		board[6][5]=rBoard[2][0];
		board[6][4]=rBoard[2][1];
		board[6][3]=rBoard[2][2];

		board[5][2]=rBoard[3][0];
		board[4][2]=rBoard[3][1] ;
		board[3][2]=rBoard[3][2] ;
	}
	else if (mod == 1) {
		board[8][3]=rBoard[0][0];
		board[8][4]=rBoard[0][1];
		board[8][5]=rBoard[0][2];

		board[5][8]=rBoard[1][0];
		board[4][8]=rBoard[1][1];
		board[3][8]=rBoard[1][2];

		board[0][5]=rBoard[2][0];
		board[0][4]=rBoard[2][1];
		board[0][3]=rBoard[2][2];

		board[3][0]=rBoard[3][0];
		board[4][0]=rBoard[3][1];
		board[5][0]=rBoard[3][2];
	}
	else if (mod == 3) {
		board[11][3]=rBoard[0][0];
		board[11][4]=rBoard[0][1];
		board[11][5]=rBoard[0][2];

		board[3][8]=rBoard[1][0];
		board[3][7]=rBoard[1][1] ;
		board[3][6]=rBoard[1][2] ;

		board[3][5]=rBoard[2][0] ;
		board[3][4]=rBoard[2][1]  ;
		board[3][3]=rBoard[2][2] ;

		board[3][2]=rBoard[3][0]  ;
		board[3][1]=rBoard[3][1] ;
		board[3][0]=rBoard[3][2]  ;
	}
	else if (mod == 2) {
		board[5][3]=rBoard[0][0] ;
		board[5][4]=rBoard[0][1]  ;
		board[5][5]=rBoard[0][2] ;

		board[5][6]=rBoard[1][0]  ;
		board[5][7]=rBoard[1][1] ;
		board[5][8]=rBoard[1][2] ;

		board[9][5]=rBoard[2][0] ;
		board[9][4]=rBoard[2][1]  ;
		board[9][3]=rBoard[2][2] ;

		board[5][0]=rBoard[3][0]  ;
		board[5][1]=rBoard[3][1] ;
		board[5][2]=rBoard[3][2]  ;
	}
	else if (mod == 4) {
		board[0][3]=rBoard[0][0]  ;
		board[1][3]=rBoard[0][1] ;
		board[2][3]=rBoard[0][2];

			board[3][3]=rBoard[1][0] ;
		board[4][3]=rBoard[1][1] ;
		board[5][3]=rBoard[1][2] ;

		board[6][3]=rBoard[2][0] ;
		board[7][3]=rBoard[2][1] ;
		board[8][3]=rBoard[2][2] ;

		board[9][3]=rBoard[3][0];
		board[10][3]=rBoard[3][1] ;
		board[11][3]=rBoard[3][2]  ;
	}
	else if (mod == 5) {
		board[2][5]=rBoard[0][0] ;
		board[1][5]=rBoard[0][1] ;
		board[0][5]=rBoard[0][2]  ;

		board[11][5]=rBoard[1][0]  ;
		board[10][5]=rBoard[1][1] ;
		board[9][5]=rBoard[1][2]  ;

		board[8][5]=rBoard[2][0]  ;
		board[7][5]=rBoard[2][1] ;
		board[6][5]=rBoard[2][2] ;

		board[5][5]=rBoard[3][0] ;
		board[4][5]=rBoard[3][1]  ;
		board[3][5]=rBoard[3][2] ;
	}

}

void sideRotate(int mod,int ca) {
	int tmp[3];
	bPush(mod);

	if (ca == 0) {
		for (int i = 0; i < 3; i++) {
			tmp[i] = rBoard[3][i];
		}
		for (int i = 2; i >=0; i--) {
			for (int j = 0; j < 3; j++) {
				rBoard[(i + 1) ][j] = rBoard[i][j];
			}
		}
		for (int i = 0; i < 3; i++) {
			rBoard[0][i] = tmp[i];
		}
	}
	if (ca==1){
		for (int i = 0; i < 3; i++) {
			tmp[i] = rBoard[0][i];
		}
		for (int i = 1; i <= 3; i++) {
			for (int j = 0; j < 3; j++) {
				rBoard[i-1][j] = rBoard[i][j];
			}
		}
		for (int i = 0; i < 3; i++) {
			rBoard[3][i] = tmp[i];
		}
	}
	bPull(mod);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 3; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			newBoard[j][i] = 1;
		}
	}
	for (int i = 3; i < 6; i++) {
		for (int j = 3; j < 6; j++) {
			newBoard[j][i] = 2;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 3; j < 6; j++) {
			newBoard[j][i] = 5;
		}
	}
	for (int i = 6; i < 9; i++) {
		for (int j = 3; j < 6; j++) {
			newBoard[j][i] = 6;
		}
	}

	for (int i = 3; i < 6; i++) {
		for (int j = 6; j < 9; j++) {
			newBoard[j][i] = 3;
		}
	}
	for (int i = 3; i < 6; i++) {
		for (int j = 9; j < 12; j++) {
			newBoard[j][i] = 4;
		}
	}
	int tc;
	cin >> tc;
	while (tc--) {
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 9; j++) {
				board[i][j] = newBoard[i][j];
			}
		}
		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {

			string str;
			cin >>str;
			char mod1 = str[0];
			char mod2=str[1];
			int Mod2;
			if (mod2 == '+')Mod2 = 0;
			else Mod2 = 1;
			for (int j = 0; j < 6; j++) {
				if (mod1 == mo[j]) {

					sideRotate(j, Mod2);
					rotate(state[j][0], state[j][1], Mod2);
				}
			}
		}



		for (int i = 3; i < 6; i++) {
			for (int j = 3; j < 6; j++) {
				for (int k = 0; k < 6; k++) {

					if (board[i][j] == k+1)cout << col[k];
				}
			}
			cout << '\n';
		}
	}

}*/