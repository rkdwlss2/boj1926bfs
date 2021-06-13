////
////  boj16939.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/05/17.
////
//
//#include <iostream>
//using namespace std;
//
//int board[8][8];
//int tboard[8][8];
//
//int state[24][2] = {
//    {0,2},{0,3},{1,2},{1,3},{2,2},{2,3},{3,2},{3,3},{4,2},{4,3},{5,2},{5,3},{2,0},{2,1},{3,0},{3,1},{2,4},{2,5},{3,4},{3,5},{2,6},{2,7},{3,6},{3,7}
//};
//
//int Loc[6][2] = {
//    {0,2},{2,2},{4,2},{2,0},{2,4},{2,6}
//};
//
//void rotate(int x,int y,int num) {
//    int tmp[6][6];
//    for (int i = 0; i < num; i++) {
//        for (int j = 0; j < num; j++) {
//            tmp[j][num-1-i] = board[x + i][y + j];
//        }
//    }
//    for (int i = 0; i < num; i++) {
//        for (int j = 0; j < num; j++) {
//            board[x + i][y + j]= tmp[i][j];
//        }
//    }
//}
//
//void change(int mod) {
//    int tmp[2][2];
//    for (int i = 0; i <2; i++) {
//        for (int j = 0; j < 2; j++) {
//            if (mod == 0) {
//                tmp[i][j]=board[2 + i][6 + 1-j];
//            }
//            else {
//                tmp[i][j] = board[6 + i][2 +1-j];
//            }
//        }
//    }
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            if (mod == 0) {
//                board[6 + i][2 + j] = tmp[i][j];
//            }
//            else {
//                board[2 + i][6 + j] = tmp[i][j];
//            }
//        }
//    }
//}
//
//void pushRow(int x,int mod) {
//    int tmp[2];
//    int tmp2[6];
//    if (mod == 2||mod==3) change(0);
//    for (int j = 0; j < 6; j++) {
//        if (mod == 0) {
//            tmp2[j] = board[x][j+2];
//        }
//        else if(mod==1) {
//            tmp2[j] = board[x][j];
//        }
//        else if(mod==2){
//            tmp2[j] = board[j][x];
//        }
//        else {
//            tmp2[j] = board[j + 2][x];
//        }
//    }
//    
//    for (int j = 0; j < 2; j++) {
//        if (mod == 0) {
//            tmp[j] = board[x][j];
//        }
//        else if (mod == 1) {
//            tmp[j] = board[x][j + 6];
//        }
//        else if (mod == 2) {
//            tmp[j] = board[j+6][x];
//        }
//        else {
//            tmp[j] = board[j][x];
//        }
//    }
//    
//
//    for (int j = 0; j < 6; j++) {
//        if (mod == 0) {
//            board[x][j]= tmp2[j];
//        }
//        else if (mod == 1) {
//            board[x][j+2]= tmp2[j];
//        }
//        else if (mod == 2) {
//            board[j + 2][x]= tmp2[j];
//        }
//        else {
//            board[j][x]=tmp2[j];
//        }
//    }
//    
//
//    for (int j = 0; j < 2; j++) {
//        if (mod == 0) {
//            board[x][j+6]= tmp[j];
//        }
//        else if (mod == 1) {
//            board[x][j]=tmp[j];
//        }
//        else if (mod == 2) {
//            board[j][x]=tmp[j];
//        }
//        else {
//            board[j+6][x] = tmp[j];
//        }
//    }
//    if (mod == 2 || mod == 3) change(1);
//}
//
//void front(int mod) {
//    if (mod == 0) {
//        rotate(1, 1, 4);
//        return;
//    }
//    for (int i = 0; i < 3; i++) {
//        rotate(1, 1, 4);
//    }
//}
//
//void back(int mod) {
//    if (mod == 0) {
//        rotate(0, 0, 6);
//        for (int i = 0; i < 3; i++) {
//            rotate(1, 1, 4);
//            rotate(2, 6, 2);
//        }
//        return;
//    }
//    for (int i = 0; i < 3; i++) {
//        rotate(0, 0, 6);
//    }
//    rotate(1, 1, 4);
//    rotate(2, 6, 2);
//}
//
//void right(int mod) {
//    if (mod == 0) {
//        for (int i = 0; i < 3; i++) {
//            rotate(2, 4, 2);
//        }
//        pushRow(3,2);
//        return;
//    }
//    rotate(2, 4, 2);
//    pushRow(3, 3);
//}
//void left(int mod) {
//    if (mod == 0) {
//        rotate(2, 0, 2);
//        pushRow(2, 2);
//        return;
//    }
//    for (int i = 0; i < 3; i++) {
//        rotate(2, 0, 2);
//    }
//    pushRow(2, 3);
//}
//void up(int mod) {
//    if (mod == 0) {
//        rotate(0, 2, 2);
//        pushRow(2, 0);
//        return;
//    }
//    for (int i = 0; i < 3; i++) {
//        rotate(0, 2, 2);
//    }
//    pushRow(2, 1);
//}
//void down(int mod) {
//    if (mod == 0) {
//        rotate(4, 2, 2);
//        pushRow(3, 1);
//        return;
//    }
//    for (int i = 0; i < 3; i++) {
//        rotate(4, 2, 2);
//    }
//    pushRow(3, 0);
//}
//
//void saveB(int mod) {
//    if (mod == 0) {
//        for (int i = 0; i < 8; i++) {
//            for (int j = 0; j < 8; j++) {
//                tboard[i][j] = board[i][j];
//            }
//        }
//        return;
//    }
//    for (int i = 0; i < 8; i++) {
//        for (int j = 0; j < 8; j++) {
//            board[i][j] = tboard[i][j];
//        }
//    }
//}
//bool checkB(int x,int y) {
//    int tmp = board[x][y];
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            if (board[x + i][y + j] != tmp)return false;
//        }
//    }
//    return true;
//}
//bool CheckAll() {
//    for (int i = 0; i < 6; i++) {
//        int x = Loc[i][0];
//        int y = Loc[i][1];
//        if (!checkB(x, y))return false;
//    }
//    return true;
//}
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    for (int i = 0; i < 24; i++) {
//        int x = state[i][0];
//        int y = state[i][1];
//        cin >> board[x][y];
//    }
//    bool check = false;
//    for (int i = 0; i < 12; i++) {
//        saveB(0);
//        if (i == 0) {
//            front(0);
//        }
//        else if (i == 1) {
//            front(1);
//        }
//        else if (i == 2) {
//            back(0);
//        }
//        else if (i == 3) {
//            back(1);
//        }
//        else if (i == 4) {
//            left(0);
//        }
//        else if (i == 5) {
//            left(1);
//        }
//        else if (i == 6) {
//            right(0);
//        }
//        else if (i==7){
//            right(1);
//        }
//        else if (i == 8) {
//            up(0);
//        }
//        else if (i == 9) {
//            up(1);
//        }
//        else if (i == 10) {
//            down(0);
//        }
//        else {
//            down(1);
//        }
//        if (CheckAll()) {
//            cout << 1 << '\n';
//            check = true;
//            break;
//        }
//        saveB(1);
//    }
//    if (!check)cout << 0 << '\n';
//}
