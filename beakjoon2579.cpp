////
////  beakjoon2579.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/05.
////
//
//#include <iostream>
//
//using namespace std;
//int n;
//int a[302];
//int d[10001];
//int dp(int level,int count){
//    if (level<0) return -999999999;
//    if (level==0) return 0;
//    if (d[level]>0)return d[level];
//    if (count==1){
//        d[level]=max(d[level],dp(level-2,0)+a[level]);
//    }
//    else{
//        d[level]=max(dp(level-2,0)+a[level],dp(level-1,1)+a[level]);
//    }
//    return d[level];
//}
//int main(void){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 1 ; i <= n ; i++){
//        cin>>a[i];
//    }
//    dp(n,0);
//    if (n==1){
//        cout<<a[0];
//    }
//    else{
//        cout<<d[n];
//    }
//}
