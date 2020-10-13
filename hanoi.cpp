////
////  hanoi.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/01.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<pair<int,int>> v;
//void hanoi(int a, int b , int n){
//    if (n==0)return;
//    hanoi(a,6-a-b,n-1);
//    v.push_back({a,b});
//    hanoi(6-a-b,b,n-1);
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    hanoi(1,3,n);
//    cout<<v.size()<<'\n';
//    for (int i =0;i<v.size();i++){
//        cout<<v[i].first<<' '<<v[i].second<<'\n';
//    }
//}
