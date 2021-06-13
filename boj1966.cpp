////
////  boj1966.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/28.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        vector<int> v;
//        int n,k;
//        cin>>n>>k;
//        queue<pair<int,int>> q;
//        for (int i = 0 ; i < n;i++){
//            int tmp;
//            cin>>tmp;
//            q.push({i,tmp});
//            v.push_back(tmp);
//        }
//        sort(v.begin(),v.end());
//        int count=0;
//        while(true){
//            auto now=q.front();
//            int index=now.first;
//            int value=now.second;
//            if (value==v[v.size()-1]){
//                count++;
//                q.pop();
//                v.pop_back();
//                if (index==k){
//                    cout<<count<<'\n';
//                    break;
//                }
//            }else{
//                q.pop();
//                q.push({index,value});
//            }
//        }
//    }
//}
