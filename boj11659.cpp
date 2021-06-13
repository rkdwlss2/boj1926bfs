////
////  boj11659.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/03.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[100001];
//int preSum[100001];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    for (int i = 1 ; i<=n;i++){
//        cin>>arr[i];
//    }
//    int sum=0;
//    preSum[0]=0;
//    for (int i = 1 ; i <=n;i++){
//        sum+=arr[i];
//        preSum[i]=sum;
//    }
//    for (int i = 0 ;i<m;i++){
//        int left,right;
//        cin>>left>>right;
//        cout<<preSum[right]-preSum[left-1]<<'\n';
//    }
//}
