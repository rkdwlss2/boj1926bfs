////
////  code_a.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/29.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//#define lli long long int
//vector<pair<lli,lli>> tmp;
//int main(){
//    
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli t;
//    cin>>t;
//    while(t--){
//        lli n,m,r,c;
//        cin>>n>>m>>r>>c;
//        vector<pair<lli,lli>> ans;
//        ans=tmp;
//        ans.push_back({1,1});
//        ans.push_back({n,m});
//        ans.push_back({1,m});
//        ans.push_back({n,1});
//        lli ans1=0;
//        for (lli i = 0 ; i <4;i++){
//            lli x=ans[i].first;
//            lli y=ans[i].second;
//            lli length=0;
//            if (x<r){
//                length+=r-x;
//            }else{
//                length+=x-r;
//            }
//            if (y<c){
//                length+=c-y;
//            }else{
//                length+=y-c;
//            }
//            if (ans1<length){
//                ans1=length;
//            }
//        }
//        cout<<ans1<<'\n';
//    }
//}
