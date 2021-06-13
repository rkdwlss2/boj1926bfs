////
////  boj10870.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/26.
////
//
//#include <iostream>
//
//using namespace std;
//
//int cache[21];
//
//int pibo(int n){
//    if (n==0)return 0;
//    if (n==1)return 1;
//    int& ret=cache[n];
//    if (ret!=-1)return ret;
//    ret=0;
//    return ret=pibo(n-1)+pibo(n-2);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    fill(cache,cache+21,-1);
//    cout<<pibo(n)<<'\n';
//}
//
