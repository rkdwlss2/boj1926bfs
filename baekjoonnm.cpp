////
////  baekjoonnm.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/02.
////
//
//#include <iostream>
//using namespace std;
//int isused[10];
//int arr[10];
//int n,m;
//
//void go(int k){
//    if (k==m){
//        for (int i = 0 ; i < m;i++){
//            cout << arr[i]<<' ';
//        }
//        cout << '\n';
//        return;
//    }
//    for (int i = 1 ; i<=n;i++){
//        if (!isused[i]){
//            isused[i]=true;
//            arr[k]=i;
//            go(k+1);
//            isused[i]=false;
//        }
//    }
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >>n>>m;
//    go(0);
//}
