////
////  beak1149.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/06.
////
//
//#include <iostream>
//using namespace std;
//int a[1001][3];
//int d[1001][3];
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0 ; i < n ;i++){
//        cin >> a[i][0]>>a[i][1]>>a[i][2];
//    }
//    d[0][0]=a[0][0];
//    d[0][1]=a[0][1];
//    d[0][2]=a[0][2];
//    for (int i =1;i<n;i++){
//        d[i][0]=min(d[i-1][1]+a[i][0],d[i-1][2]+a[i][0]);
//        d[i][1]=min(d[i-1][0]+a[i][1],d[i-1][2]+a[i][1]);
//        d[i][2]=min(d[i-1][0]+a[i][2],d[i-1][1]+a[i][2]);
//    }
//    int max1=min(d[n-1][0],d[n-1][1]);
//    cout << min(max1,d[n-1][2]);
//    
//}
