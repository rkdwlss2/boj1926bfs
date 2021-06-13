////
////  AlogospotRatio.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/14.
////
//
//#include <iostream>
//
//using namespace std;
//
//long long L=2000000000;
//
//int ratio1(long long b,long long a){
//    return (a*100)/b;
//}
//int neededGames(long long games,long long won){
//    if (ratio1(games,won)==ratio1(games+L,won+L))
//        return -1;
//    long long lo=0,hi=L;
//    while (lo+1<hi){
//        long long mid=(lo+hi)/2;
//        if (ratio1(games,won)==ratio1(games+mid,won+mid))
//            lo=mid;
//        else
//            hi=mid;
//    }
//    return hi;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        long long n,m;
//        cin>>n>>m;
//        cout<<neededGames(n, m)<<'\n';
//    }
//}
