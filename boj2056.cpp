////
////  boj2056.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int n;
//int work[10001];
//int indegree[10001];
//int d[10001];
//vector<int> graph[10001];
//
//void bfs(){
//    queue<int> q;
//    for (int i = 1;i<=n;i++){
//        if (indegree[i]==0){
//            q.push(i);
//            d[i]=work[i];
//        }
//    }
//    while (!q.empty()){
//        int now = q.front();q.pop();
//        for (int dir = 0 ; dir < graph[now].size();dir++){
//            int y =graph[now][dir];
//            indegree[y]--;
//            if (d[y]<d[now]+work[y]){
//                d[y]=d[now]+work[y];
//            }
//            if (indegree[y]==0){
//                q.push(y);
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
//        int w,m;
//        cin>>w>>m;
//        work[i]=w;
//        while(m--){
//            int tmp;
//            cin >>tmp;
//            graph[tmp].push_back(i);
//            indegree[i]++;
//        }
//    }
//    
//    bfs();
//
//    int ans=0;
//    for (int i =1;i<=n;i++){
//        if (ans<d[i]){
//            ans=d[i];
//        }
//    }
//    cout<<ans<<'\n';
//}
