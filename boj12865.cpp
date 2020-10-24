////
////  boj12865.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/21.
////
//
//#include <iostream>
//using namespace std;
//
//int d[101][100001];
//int n,t;
//int arr[101];
//int w[101];
//int v[101];
//
//int dp(int index,int weight){
//    if (index==0)return 0;
//    if (d[index][weight]!=-1)return d[index][weight];
//    int m1=dp(index-1,weight);
//    int m2=0;
//    if (weight-w[index]>=0){
//        m2=dp(index-1,weight-w[index])+v[index];
//    }
//    return d[index][weight]=max(m1,m2);
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>t;
//    for (int i = 0;i<101;i++){
//        fill(d[i],d[i]+100001,-1);
//    }
//    for (int i =1;i<=n;i++){
//        cin>>w[i]>>v[i];
//    }
//    cout<<dp(n,t);
//}
