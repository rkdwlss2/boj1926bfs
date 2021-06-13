////
////  boj1516.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/04/07.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> graph[501];
//int indegree[501];
//int Cost[501];
//int Ans[501];
//int n;
//
//void bfs(){
//    queue<pair<int,int>> q;
//    for (int i = 1; i<=n;i++){
//        if (indegree[i]==0){
//            Ans[i]=Cost[i];
//            q.push({i,Cost[i]});
//        }
//    }
//    while (!q.empty()){
//        pair<int,int> cur=q.front();
//        q.pop();
//        int time=cur.second;
//        int now=cur.first;
//        for (int i = 0 ; i < graph[now].size();i++){
//            int next=graph[now][i];
//            int nextTime=time+Cost[next];
//            if (Ans[next]<nextTime){
//                Ans[next]=nextTime;
//            }
//            indegree[next]--;
//            if (indegree[next]==0){
//                q.push({next,Ans[next]});
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 1;i<=n;i++){
//        int cost;
//        cin>>cost;
//        Cost[i]=cost;
//        while (true){
//            int tmp;
//            cin>>tmp;
//            if (tmp==-1)break;
//            graph[tmp].push_back(i);
//            indegree[i]++;
//        }
//    }
//    bfs();
//    for (int i = 1 ;i <=n;i++){
//        cout<<Ans[i]<<'\n';
//    }
//    
//}
