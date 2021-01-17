////
////  boj1260.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/30.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m,v;
//int graph[1001][1001];
//bool visited[1001];
//
//void dfs(int start){
//    cout<<start<<' ';
//    for (int i = 1 ; i<=n;i++){
//        if (visited[i]==false&&graph[start][i]==1){
//            visited[i]=true;
//            dfs(i);
//        }
//    }
//}
//
//void bfs(int start){
//    queue<int> q;
//    q.push(start);
//    visited[start]=true;
//    cout<<start<<' ';
//    while (!q.empty()){
//        int now=q.front();
//        q.pop();
//        for(int next=1;next<=n;next++){
//            if (visited[next]==true)continue;
//            if (graph[now][next]!=1)continue;
//            cout<<next<<' ';
//            visited[next]=true;
//            q.push(next);
//        }
//
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>v;
//    for (int i = 0 ; i <m;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a][b]=1;
//        graph[b][a]=1;
//    }
//    visited[v]=true;
//    dfs(v);
//    fill(visited,visited+1001,false);
//    cout<<'\n';
//    bfs(v);
//    cout<<'\n';
//}
