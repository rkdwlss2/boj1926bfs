////
////  boj1463.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/24.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int n;
//
//int cache[1000001];
//const int inf=987654321;
//int dp(int now){
//    if (now==1)return 0;
//    if (now<1)return inf;
//    int& ret=cache[now];
//    if (ret!=-1)return ret;
//    ret=inf;
//    if (now%3==0){
//        ret=min(ret,dp(now/3)+1);
//    }
//    if (now%2==0){
//        ret=min(ret,dp(now/2)+1);
//    }
//    ret=min(ret,dp(now-1)+1);
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    memset(cache,-1,sizeof(cache));
//    cout<<dp(n)<<'\n';
//}
