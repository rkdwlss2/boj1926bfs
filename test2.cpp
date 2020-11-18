////
////  test2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/18.
////
//
//#include <iostream>
//typedef long long int lli;
//using namespace std;
//lli a[1000001];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli tc;
//    cin>>tc;
//    while(tc--){
//        lli n,k;
//        cin>>n>>k;
//        lli mid=n/2+1;
//        lli sum=0;
//        for (lli i = 0 ; i<n*k;i++){
//            cin>>a[i];
//        }
//        lli jump=k;
//        lli i=n*k-mid;
//        while (jump--){
//            sum+=a[i];
//            i-=mid;
//        }
//        cout<<sum<<'\n';
//    }
//}
