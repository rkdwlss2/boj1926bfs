////
////  nhntest.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/24.
////
//
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//int n;
//bool arr[27];
//vector<pair<int,int>> v;
//int movearr[101];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 1 ;i < n;i++){
//        v.push_back({i,0});
//    }
//    int m;
//    cin >>m;
//    for (int i = 0  ; i <m;i++){
//        char tmp;
//        cin>>tmp;
//        arr[tmp-'A']=true;
//    }
//    int c;
//    cin>>c;
//    pair<int,int> now;
//    now.first=0;
//    now.second=1;
//    int nowindex=0;
//    while (c--){
//        int tmp1;
//        cin>>tmp1;
//        
//        nowindex=tmp1+nowindex;
//        if (nowindex<0){
//            nowindex=(n-1)-abs(nowindex)%(n-1);
//        }
//        else{
//            nowindex%=(n-1);
//        }
//        cout <<nowindex<<' ';
//        if (arr[v[nowindex].first]==true){
//            now.second++;
//        }
//        else{
//            pair<int,int> tmpnow;
//            tmpnow.first=v[nowindex].first;
//            tmpnow.second=v[nowindex].second;
//            v[nowindex].first=now.first;
//            v[nowindex].second=now.second;
//            now.first=tmpnow.first;
//            now.second=tmpnow.second+1;
//        }
//    }
//    for (auto i : v){
//        char tmp11='A'+i.first;
//        cout<<tmp11<<' '<<i.second<<'\n';
//    }
//    char tmp12='A'+now.first;
//    cout<<tmp12<<' '<<now.second<<'\n';
//}
