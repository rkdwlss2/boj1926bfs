////
////  boj2156.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/09.
////
//
//#include <iostream>
//
//using namespace std;
//
//int n;
//int a[10001];
//int d[10001][5];
//
//int dp(int index,int series){
//    if (index==n)return 0;
//    int &ret=d[index][series];
//    if (ret!=-1)return ret;
//    int m1=dp(index+1,0);
//    int m2=-1;
//    if (series!=2){
//        m2=dp(index+1,series+1)+a[index];
//    }
//    return ret=max(m1,m2);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        cin>>a[i];
//    }
//    for (int i=0;i<10001;i++){
//        fill(d[i],d[i]+5,-1);
//    }
//    cout<<dp(0,0)<<'\n';
//}
