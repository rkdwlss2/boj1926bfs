////
////  prefixdp.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/06.
////
//
//#include <iostream>
//using namespace std;
//int d[100001];
//int a[100001];
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0 ; i<n;i++){
//        cin>>a[i];
//    }
//    d[0]=a[0];
//    for (int i = 1 ; i <n;i++){
//        d[i]=max(d[i-1]+a[i],a[i]);
//    }
//    int mx=-0x7f7f7f7f;
//    for (int i = 0 ; i<n;i++){
//        mx=max(mx,d[i]);
//    }
//    cout<<mx;
//}
