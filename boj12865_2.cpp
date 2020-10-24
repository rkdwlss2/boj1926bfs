////
////  boj12865_2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/21.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[101];
//int d[100001];
//int n,t;
//int v[101];
//int w[101];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> t;
//    for (int i = 1 ; i<=n;i++){
//        cin>>w[i]>>v[i];
//    }
//    for (int i = 1;i<=n;i++){
//        for (int j = t;j>=0;j--){
//            d[j]=d[j];
//            if (j-w[i]>=0){
//                d[j]=max(d[j],d[j-w[i]]+v[i]);
//            }
//        }
//    }
//    cout<<d[t]<<'\n';
//}
