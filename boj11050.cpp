////
////  boj11050.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/28.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int cache[11][11];
//
//int go(int n,int k){
//    if (n==k)return 1;
//    if (k==1)return n;
//    if (k==0)return 1;
//    int& ret=cache[n][k];
//    if (ret!=-1)return ret;
//    return ret=go(n-1,k)+go(n-1,k-1);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,k;
//    cin>>n>>k;
//    memset(cache,-1,sizeof(cache));
//    cout<<go(n,k)<<'\n';
//}
