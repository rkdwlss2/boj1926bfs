////
////  boj2839.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/23.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int cache[5001];
//int n;
//int inf=987654321;
//int dp(int x){
//    if (x==n)return 0;
//    if (x>n)return inf;
//    int& ret=cache[x];
//    if (ret!=-1)return ret;
//    return ret=min(dp(x+5)+1,dp(x+3)+1);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    memset(cache,-1,sizeof(cache));
//    int answer=dp(0);
//    if (answer>=inf){
//        cout<<-1<<'\n';
//    }else{
//        cout<<dp(0)<<'\n';
//    }
//}
