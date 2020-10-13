////
////  beaklis2293.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/07.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int a[105];
//int n,k;
//vector<int> d1;
//vector<int> d2;
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n>>k;
//    d1.resize(k+1);
//    d2.resize(k+1);
//    for (int i =0;i<n;i++)cin>>a[i];
//    for (int i =0;i<=k;i+=a[0])d1[i]=1;
//    for (int i = 1 ;i<n;i++){
//        fill(d2.begin(),d2.end(),0);
//        for (int j = 0 ; j <=k;j++){
//            d2[j]=d1[j];
//            if (j-a[i]>=0)d2[j]+=d2[j-a[i]];
//        }
//        d1=d2;
//    }
//    cout<<d1[k];
//}
