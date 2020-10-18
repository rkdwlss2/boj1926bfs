////
////  programmerswe.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/15.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//using namespace std;
//
//int v,e;
//
//int indegree[100001];
//int indegree2[100001];
////bool visited[100001];
//vector<int> graph[100001];
//int ans=0;
//void topologySort(){
//    vector<int> result;
//    queue<int> q;
//    int num=0;
//    for (int i =1;i<=v;i++){
//        if (indegree[i]==0){
//            q.push(i);
//            num++;
//        }
//    }
//    if (num==1){
//        ans++;
//        num=0;
//    }
//    while (!q.empty()){
//        int now =q.front();
//        q.pop();
//        result.push_back(now);
//        bool ok=true;
//        for (int i = 0;i<graph[now].size();i++){
//            indegree[graph[now][i]]-=1;
////            visited[graph[now][i]]=true;
//            if (indegree[graph[now][i]]==0){
//                num++;
//                if (indegree2[graph[now][i]]>1){
//                    ok=false;
//                }
//                q.push(graph[now][i]);
//            }
//        }
//        if (ok==true&&num==1){
//            ans++;
//            num=0;
//        }
//        else{
//            num=0;
//        }
//    }
//}
//int solution(int n, vector<vector<int>> results) {
//    int answer = 0;
//    v=n;
//    e=results.size();
//    for (auto i : results){
//        graph[i[1]].push_back(i[0]);
//        indegree[i[0]]+=1;
//        indegree2[i[0]]+=1;
//    }
//    topologySort();
//    cout<<ans<<'\n';
//    return ans;
//}
//int main(void){
//    vector<vector<int>> result={{4,3},{4,2},{3,2},{1,2},{2,5}};
//    solution(5, result);
//}
