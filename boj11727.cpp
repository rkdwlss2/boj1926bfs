////
////  boj11727.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/23.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int n;
//int cache[1001];
//int dp(int index){
//    if (index==0)return 1;
//    if (index<0)return 0;
//    int& ret=cache[index];
//    if (ret!=-1)return ret;
//    ret=0;
//    return ret=(2*dp(index-2)+dp(index-1))%10007;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    memset(cache, -1, sizeof(cache));
//    cout<<dp(n)<<'\n';
//}
