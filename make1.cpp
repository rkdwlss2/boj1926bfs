////
////  make1.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/05.
////
//
//#include <iostream>
//using namespace std;
//
//int d[1000001];
//
//int dp(int n){
//    if (n<=1)return d[1]=0;
//    if (d[n]>0)return d[n];
//    d[n]=99999999;
//    if (n%3==0){
//        d[n]=min(d[n],dp(n/3)+1);
//    }
//    if (n%2==0){
//        d[n]=min(d[n],dp(n/2)+1);
//    }
//    d[n]=min(d[n],dp(n-1)+1);
//    
//    return d[n];
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    dp(n);
//    cout<<d[n]<<'\n';
//}
