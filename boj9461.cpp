////
////  boj9461.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/06.
////
//
//#include <iostream>
//using namespace std;
//#define lli long long int
//int n;
//lli cache[101];
//
//lli go(lli index){
//    if (index>=1&&index<=3)return 1;
//    if (index==4||index==5)return 2;
//    lli& ret=cache[index];
//    if (ret!=-1)return ret;
//    return ret=go(index-1)+go(index-5);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    fill(cache,cache+101,-1);
//    while(tc--){
//        cin>>n;
//        cout<<go(n)<<'\n';
//    }
//}
