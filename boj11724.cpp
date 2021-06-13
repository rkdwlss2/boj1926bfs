////
////  boj11724.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/30.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//
//int graph[1001][1001];
//bool visited[1001];
//
//void dfs(int now){
//    visited[now]=true;
//    for (int next = 1 ;next<=n;next++){
//        if (visited[next]==false&&graph[now][next]==1){
//            dfs(next);
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ;i<m;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a][b]=1;
//        graph[b][a]=1;
//    }
//    int answer=0;
//    for (int i=1;i<=n;i++){
//        if (visited[i]==false){
//            dfs(i);
//            answer++;
//        }
//    }
//    cout<<answer<<'\n';
//}
