////
////  test1.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/17.
////
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//typedef long long int lli;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli tc;
//    cin>> tc;
//    while(tc--){
//        lli n,c0,c1,h;
//        cin>>n>>c0>>c1>>h;
//        string s;
//        cin>>s;
//        lli c0sum=0;
//        lli c0count=0;
//        lli c1count=0;
//        lli c1sum=0;
//        for (int i = 0 ; i < n;i++){
//            int tmp=s[i]-'0';
//            if (tmp==0){
//                c0count++;
//            }else{
//                c1count++;
//            }
//        }
//        lli change1=c1count*c1+c0count*c0;
//        c0sum=c0*n+c1count*h;
//        c1sum=c1*n+c0count*h;
//        lli ans=min(change1,c0sum);
//        ans=min(ans,c1sum);
//        cout<<ans<<'\n';
//    }
//}
