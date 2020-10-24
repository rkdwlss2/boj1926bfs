////
////  boj1495.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/21.
////
//
//#include <iostream>
//using namespace std;
//int n,s,t;
//int arr[101];
//int d[101][1001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>s>>t;
//    for (int i = 0 ;i<n;i++)cin>>arr[i];
//    d[0][s]=1;
//    for (int i = 0 ; i<n;i++){
//        for (int j =0;j<=t;j++){
//            if (d[i][j]==1){
//                if (j-arr[i]>=0){
//                    d[i+1][j-arr[i]]=1;
//                }
//                if (j+arr[i]<=t){
//                    d[i+1][j+arr[i]]=1;
//                }
//            }
//        }
//    }
//    int max=-1;
//    for (int i=0;i<=t;i++){
//        if (d[n][i]==1){
//            if (max<i){
//                max=i;
//            }
//        }
//    }
//    cout<<max<<'\n';
//}
