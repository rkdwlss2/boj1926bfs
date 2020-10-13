////
////  baek2293.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/07.
////
//
//#include <iostream>
//
//using namespace std;
//
//int d[10005];
//int a[105];
//int n,k;
//
//
//int main(void){
//    ios::sync_with_stdio();
//    cin.tie(0);
//    cin>>n>>k;
//    for (int i =0;i<n;i++){
//        cin>>a[i];
//        d[a[i]]=1;
//    }
//    
//    for (int i =1;i<=n;i++){
//        for (int j = 0 ; j<n;j++){
//            if (i-a[j]>0){
//                d[i]+=d[i-a[j]];
//            }
//        }
//    }
//    cout<<d[k];
//}
