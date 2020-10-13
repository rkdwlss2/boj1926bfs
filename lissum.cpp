//
//  lissum.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/02.
//
//
//#include <iostream>
//
//using namespace std;
//int n,m;
//int arr[21];
//bool isused[21];
//int ans;
//int cnt=0;
//void go(int k){
//    if (k==n){
//        if (ans==m){
//            cnt++;
//        }
//        return;
//    }
//    if (!isused[k]){
//        isused[k]=true;
//        ans+=arr[k];
//        go(k+1);
//        isused[k]=false;
//        ans-=arr[k];
//    }
//    go(k+1);
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n>>m;
//    for (int i = 0 ; i < n;i++){
//        cin>>arr[i];
//    }
//    go(0);
//    if (m==0){
//        cout<<cnt-1<<'\n';
//    }
//    else{
//        cout<<cnt<<'\n';
//    }
//}
