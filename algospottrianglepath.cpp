////
////  algospottrianglepath.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//
//int n;
//int arr[101][101];
//int dp[101][101];
//
//int go(int x,int y){
//    if (x==n-1)return arr[x][y];
//    if (dp[x][y]>=0)return dp[x][y];
//    return dp[x][y]=max(go(x+1,y),go(x+1,y+1))+arr[x][y];
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while (c--){
//        for (int i=0;i<101;i++){
//            fill(dp[i],dp[i]+101,-1);
//        }
//        cin>>n;
//        for (int i = 0 ; i < n ;i++){
//            for (int j = 0 ; j <i+1;j++){
//                cin>>arr[i][j];
//            }
//        }
//        cout<<go(0,0)<<'\n';
//    }
//}
