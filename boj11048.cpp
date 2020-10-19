////
////  boj11048.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/18.
////
//
//#include <iostream>
//
//using namespace std;
//int n,m;
//int arr[1001][1001];
//int d[1001][1001];
//int go(int i,int j){
//    if (i>n||j>m)return 0;
//    if (d[i][j]>=0)return d[i][j];
//    d[i][j]=max(go(i+1,j),go(i,j+1))+arr[i][j];
//    return d[i][j];
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n>>m;
//    for (int i = 1 ;i<=n;i++){
//        for (int j=1;j<=m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for (int i = 1;i<=n;i++){
//        fill(d[i]+1,d[i]+m+1,-1);
//    }
//    cout<<go(1,1)<<'\n';
//}
