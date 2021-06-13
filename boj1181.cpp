////
////  boj1181.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/06.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    vector<pair<int,string>> v;
//    for (int i = 0 ; i<n;i++){
//        string str;
//        cin>>str;
//        v.push_back({str.size(),str});
//    }
//    sort(v.begin(),v.end());
//    string prev="";
//    for (auto i : v){
//        string now=i.second;
//        if (prev!=now){
//            cout<<i.second<<'\n';
//            prev=now;
//        }
//    }
//}
