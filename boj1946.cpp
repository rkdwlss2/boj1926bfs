////
////  boj1946.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/19.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int a[100001][2];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        vector<pair<int,int>> v;
//        int n;
//        cin>>n;
//        for (int i=0;i<n;i++){
//            int a,b;
//            cin>>a>>b;
//            v.push_back({a,b});
//        }
//        sort(v.begin(),v.end());
//        int m=v[0].second;
//        int ans=1;
//        for (int i = 1 ; i < n;i++){
//            if (v[i].second<m){
//                ans++;
//                m=v[i].second;
//            }
//        }
//        cout<<ans<<'\n';
//    }
//}
