////
////  abc-185-c.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/13.
////
//
//#include <iostream>
//
//using namespace std;
//#define lli long long int
//
//lli cache[201][201];
//
//lli combination(lli n, lli r)
//{
//    lli& ret=cache[n][r];
//    if (ret!=-1)return ret;
//    ret=0;
//    if(n == r || r == 0)
//        return ret=1;
//    else
//        return ret=combination(n - 1, r - 1) + combination(n - 1, r);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli n;
//    cin>>n;
//    lli leftn=n-1;
//    lli rightn=11;
//    for (int i=0;i<201;i++){
//        fill(cache[i],cache[i]+201,-1);
//    }
//    cout<<combination(leftn, rightn)<<'\n';
//    
//}
