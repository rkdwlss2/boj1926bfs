////
////  boj1138.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/05.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    vector<pair<int,int>> v;
//    for (int i=1;i<=n;i++){
//        int a;
//        cin>>a;
//        v.push_back({i,a});
//    }
//    sort(v.begin(),v.end());
//    vector<pair<int,int>> v2;
//    for (int i=0;i<n;i++){
//        
//        for (int j=0;j<n;j++){
//            int now=v[j].first;
//            int nowSize=0;
//            for (int k=0;k<v2.size();k++){
//                if (v2[k].first>now){
//                    nowSize++;
//                }
//            }
//            if (nowSize==v[j].second){
//                cout<<v[j].first<<' ';
//                v2.push_back({v[j].first,v[j].second});
//                v.erase(v.begin()+j);
//                break;
//            }
//        }
//    }
//}
