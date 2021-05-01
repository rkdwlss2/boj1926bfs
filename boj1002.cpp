////
////  boj1002.cpp
////  boj10039
////
////  Created by 강명진 on 2021/02/28.
////
//
//#include <iostream>
//using namespace std;
//#define lli long long int
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli tc;
//    cin>>tc;
//    while(tc--){
//        lli x1,y1,r1,x2,y2,r2;
//        cin>>x1>>y1>>r1>>x2>>y2>>r2;
//        lli len=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
//        lli len2=(r1+r2)*(r1+r2);
//        lli len3=(r1-r2)*(r1-r2);
//        if (x1==x2&&y1==y2&&r1==r2)cout<<-1<<'\n';
//        else if (x1==x2&&y1==y2)cout<<0<<'\n';
//        else if (len==len3)cout<<1<<'\n';
//        else if (len<len3)cout<<0<<'\n';
//        else if (len>len2)cout<<0<<'\n';
//        else if (len==len2)cout<<1<<'\n';
//        else cout<<2<<'\n';
//    }
//}
