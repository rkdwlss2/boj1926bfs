////
////  baek11728.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/10.
////
//
//#include <iostream>
//using namespace std;
//
//int a[1000005],b[1000005],c[2000005];
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    for (int i = 0 ; i<n;i++)cin>>a[i];
//    for (int i = 0 ; i <m;i++)cin>>b[i];
//    int first=0;
//    int second=0;
//    for (int i = 0 ;i<n+m;i++){
//        if (first==n)c[i]=b[second++];
//        else if(second==m)c[i]=a[first++];
//        else if(a[first]>=b[second])c[i]=b[second++];
//        else{
//            c[i]=a[first++];
//        }
//    }
//    for (int i = 0;i<n+m;i++){
//        cout<<c[i]<<' ';
//    }
//}
