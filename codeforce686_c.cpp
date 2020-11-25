////
////  codeforce686_c.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/25.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> a;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        vector<vector<int>> v1(n+1,vector<int>(0,0));
//        for (int i = 0 ; i <n;i++){
//            int tmp;
//            cin>>tmp;
//            v1[tmp].push_back(i);
//        }
//        int ans=987654321;
//        for (int i = 1;i<=n;i++){
//            if (v1[i].empty())continue;
//            int now=0;
//            int end=n;
//            int tans=0;
//            for (auto j : v1[i]){
//                if (j-now>0){
//                    tans++;
//                }
//                now=j+1;
//            }
//            if (end-now>0){
//                tans++;
//            }
//            if (ans>tans){
//                ans=tans;
//            }
//        }
//        cout<<ans<<'\n';
//    }
//}
