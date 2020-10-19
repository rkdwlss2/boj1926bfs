////
////  boj11060_2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/19.
////
//
//#include <iostream>
//
//using namespace std;
//
//int arr[1001];
//int n;
//int d[1001];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++)cin>>arr[i];
//    fill(d,d+1001,-1);
//    d[0] = 0;
//           for (int i=1; i<n; i++) {
//               for (int j=0; j<i; j++) {
//                   if (d[j] != -1 && i-j <= arr[j]) {
//                       if (d[i] == -1 || d[i] > d[j] + 1) {
//                           d[i] = d[j] + 1;
//                       }
//                   }
//               }
//           }
//           cout << d[n-1] << '\n';
//}
