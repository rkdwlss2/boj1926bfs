////
////  boj11055.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/15.
////
//
//#include <iostream>
//using namespace std;
//int a[1001];
//int n;
//int cache[1001];
//
//int dp(int index){
//    int& ret=cache[index+1];
//    if (ret!=-1)return ret;
//    ret=0;
//    for (int next = index+1 ; next <n;next++){
//        if (index==-1||a[index]<a[next]){
//            ret=max(ret,dp(next)+a[next]);
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 0 ; i < n;i++){
//        cin>>a[i];
//    }
//    fill(cache,cache+1001,-1);
//    cout<<dp(-1)<<'\n';
//}
