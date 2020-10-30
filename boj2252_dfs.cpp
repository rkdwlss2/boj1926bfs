////
////  boj2252_dfs.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/29.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n,m;
//vector<int> graph[32001];
//bool check[32001];
//
//void dfs(int x){
//    check[x]=true;
//    for (int i = 0 ; i < graph[x].size();i++){
//        int y=graph[x][i];
//        if (check[y]==false){
//            dfs(y);
//        }
//    }
//    cout<<x<<' ';
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    while (m--){
//        int x,y;
//        cin>>x>>y;
//        graph[y].push_back(x);
//    }
//    for (int i = 1 ; i <= n;i++){
//        if (check[i]==false){
//            dfs(i);
//        }
//    }
//}
//
