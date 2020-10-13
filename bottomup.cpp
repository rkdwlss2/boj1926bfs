////
////  bottomup.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/05.
////
//
//#include <iostream>
//using namespace std;
//int n;
//int a[302];
//int d[302][2];
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 0 ; i < n ;i++){
//        cin >> a[i];
//    }
//    if (n==0){
//        cout<<0;
//    }
//    d[0][0]=a[0];
//    d[0][1]=0;
//    d[1][0]=a[1];
//    d[1][1]=a[0]+a[1];
//    for (int i = 2;i<n;i++){
//        d[i][0]=max(d[i-2][0],d[i-2][1])+a[i];
//        d[i][1]=d[i-1][0]+a[i];
//    }
//    cout<<max(d[n-1][0],d[n-1][1]);
//
//}
