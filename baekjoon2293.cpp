////
////  baekjoon2293.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/01.
////
//
//#include <iostream>
//using namespace std;
//int d[100001];
//int arr[100];
//int dp(int k,int n,int end){
//    if (k<=0||k>end)return 0;
//    if (d[k]>=1)return d[k];
//    for (int i=0;i<n;i++){
//        d[k]=d[k]+dp(k-arr[i],n,end);
//    }
//    return d[k];
//}
//int main(void){
//    int n,k;
//    cin >> n >> k ;
//    fill(d,d+100001,0);
//    for (int i = 0 ; i < n ; i++){
//        cin>>arr[i];
//        d[arr[i]]=1;
//    }
//    cout<<dp(k,n,k);
//}
