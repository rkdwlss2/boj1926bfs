////
////  mul.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/01.
////
//
//#include <iostream>
//using namespace std;
//using ll = long long;
//ll POW(ll a,ll b, ll m){
//    if (b==1)return a%m;
//    ll val=POW(a,b/2,m);
//    val=val*val%m;
//    if (b%2==0)return val;
//    return val*a%m;
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    ll a,b,m;
//    cin >> a>>b>>m;
//    ll ans=POW(a,b,m);
//    cout<<ans<<'\n';
//}
