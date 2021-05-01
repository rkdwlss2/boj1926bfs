////
////  boj14567.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/04/07.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n,m;
//vector<int> graph[1001];
//int indegree[1001];
//int answer[1001];
//void bfs(){
//    queue<pair<int,int>> q;
//    for (int i=1;i<=n;i++){
//        if (indegree[i]==0){
//            q.push({i,1});
//            answer[i]=1;
//        }
//    }
//    while(!q.empty()){
//        int now=q.front().first;
//        int sun=q.front().second;
//        q.pop();
//        for (int i = 0 ; i<graph[now].size();i++){
//            int next=graph[now][i];
//            indegree[next]--;
//            if (indegree[next]==0){
//                answer[next]=sun+1;
//                q.push({next,sun+1});
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin>>n>>m;
//    for (int i = 0 ; i <m;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a].push_back(b);
//        indegree[b]++;
//    }
//    bfs();
//    for (int i = 1; i <=n;i++){
//        cout<<answer[i]<<' ';
//    }cout<<'\n';
//}
