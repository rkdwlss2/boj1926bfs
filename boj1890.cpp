////
////  boj1890.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/28.
////
//
//#include <iostream>
//using namespace std;
//#define ll long long
//int n;
//int arr[101][101];
//ll d[101][101];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ;i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            cin>>arr[i][j];
//        }
//    }
//    d[0][0]=1;
//    for (int i = 0 ; i <n;i++){
//        for (int j=0;j<n;j++){
//            if (arr[i][j]==0){
//                continue;
//            }
//            if (i+arr[i][j]<n){
//                d[i+arr[i][j]][j]+=d[i][j];
//            }
//            if (j+arr[i][j]<n){
//                d[i][j+arr[i][j]]+=d[i][j];
//            }
//        }
//    }
//    cout<<d[n-1][n-1]<<'\n';
//}
