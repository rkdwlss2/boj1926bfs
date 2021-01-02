////
////  boj11057.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/23.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int n;
//
//int cache[1001][11];
//
//int dp(int index,int prev){
//    if (index==n){
//        return 1;
//    }
//    int& ret=cache[index][prev];
//    if (ret!=-1)return ret;
//    ret=0;
//    for (int next=0;next<=9;next++){
//        if (prev<=next){
//            ret+=dp(index+1,next)%10007;
//        }
//    }
//    return ret%10007;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    memset(cache,-1,sizeof(cache));
//    cout<<dp(0,0)<<'\n';
//
//}
