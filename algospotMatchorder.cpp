////
////  algospotMatchorder.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/02.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int order(const vector<int>& russian,const vector<int>& korean){
//    int n=russian.size(),wins=0;
//    multiset<int> ratings(korean.begin(),korean.end());
//    for (int rus=0;rus<n;rus++){
//        if (*ratings.rbegin()<russian[rus]){
//            ratings.erase(ratings.begin());
//        }else{
//            ratings.erase(ratings.lower_bound(russian[rus]));
//            ++wins;
//        }
//    }
//    return wins;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        vector<int> russian;
//        vector<int> korean;
//        for (int i=0;i<n;i++){
//            int tmp;
//            cin>>tmp;
//            russian.push_back(tmp);
//        }
//        for (int i=0;i<n;i++){
//            int tmp;
//            cin>>tmp;
//            korean.push_back(tmp);
//        }
//        cout<<order(russian,korean)<<'\n';
//    }
//}
