////
////  boj1648.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/03.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int d[14*14][1<<14];
//int n,m;
//int go(int num, int state) {
//    if (num == n*m && state == 0) {
//        return 1;
//    }
//    if (num >= n*m) {
//        return 0;
//    }
//    if (d[num][state] >= 0) {
//        return d[num][state];
//    }
//    int &ans = d[num][state];
//    ans = 0;
//    if (state & 1) {
//        ans = go(num+1, (state >> 1));
//    } else {
//        ans = go(num+1, (state >> 1) | (1 << (m-1)));
//        if ((num%m) != (m-1) && (state & 2) == 0) {
//            ans += go(num+2, (state >> 2));
//        }
//    }
//    ans %= 9901;
//    return ans;
//}
//int main() {
//    cin >> n >> m;
//    memset(d,-1,sizeof(d));
//    cout << go(0, 0) << '\n';
//    return 0;
//}
