////
////  nqueen.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/02.
////
//
//#include <iostream>
//using namespace std;
//
//int isused1[16];
//int isused2[30];
//int isused3[30];
//int ans,n;
//void go(int k){
//    if (k==n){
//        ans++;
//        return;
//    }
//    for (int i = 0 ; i < n;i++){
//        if (!isused1[i]&&!isused2[k+i]&&!isused3[k-i+n-1]){
//            isused1[i]=isused2[k+i]=isused3[k-i+n-1]=true;
//            go(k+1);
//            isused1[i]=isused2[k+i]=isused3[k-i+n-1]=false;
//        }
//    }
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    go(0);
//    cout<<ans;
//}
