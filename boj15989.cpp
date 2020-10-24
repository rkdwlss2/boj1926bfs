////
////  boj9095bottomup.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//
//int n;
//int d[10001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>> c;
//    while(c--){
//        cin>>n;
//        fill(d,d+10001,0);
//        d[0]=1;
//        int m=3;
//        int num[3]={1,2,3};
//        for (int j=0;j<m;j++){
//            for (int i =0;i<=n;i++){
//                if (i-num[j]>=0){
//                    d[i]+=d[i-num[j]];
//                }
//            }
//        }
//        cout<<d[n]<<'\n';
//    }
//}
