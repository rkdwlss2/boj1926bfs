////
////  boj9095.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//
//using namespace std;
//
//int d[11];
//
//int dp(int n){
//    if (n<0)return 0;
//    if (n==1)return d[n]=1;
//    if (n==2)return d[n]=2;
//    if (n==3)return d[n]=4;
//    if (d[n]>0)return d[n];
//    return d[n]=dp(n-1)+dp(n-2)+dp(n-3);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while(c--){
//        int tmp;
//        cin >> tmp;
//        cout<<dp(tmp)<<'\n';
//    }
//}
