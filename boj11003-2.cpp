//#include <cstdio>
//#include <algorithm>
//#include <deque>
//#include <iostream>
//using namespace std;
//int l, n, x;
//deque<pair<int, int>> dq;
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>l;
//    for (int i = 1; i <= n; i++) {
//        while (dq.size() && dq.front().second <= i - l)dq.pop_front();
//        cin>>x;
//        while (dq.size() && dq.back().first >= x)
//            dq.pop_back();
//        dq.push_back({ x,i });
//        cout<< dq.front().first<<' ';
//    }
//    return 0;
//}
//
