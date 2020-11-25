////
////  programmersDan.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/25.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<vector<int>> graph;
//int visited[51];
//int bfs(int begin,int end){
//    queue<int> q;
//    q.push(begin);
//    visited[begin]=0;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        for (int edge = 0;edge<graph[now].size();edge++){
//            int next=graph[now][edge];
//            if (visited[next]>-1)continue;
//            visited[next]=visited[now]+1;
//            if (next==end){
//                return visited[next];
//            }
//            q.push(next);
//        }
//    }
//    return 0;
//}
//int solution(string begin, string target, vector<string> words) {
//    int answer = 0;
//    int beginindex=-1;
//    int targetindex=-1;
//    words.push_back(begin);
//    for (int i = 0 ; i < words.size();i++){
//        if (begin==words[i]){
//            beginindex=i;
//        }else if(target==words[i]){
//            targetindex=i;
//        }
//        vector<int> a;
//        graph.push_back(a);
//        for (int j=0;j<words.size();j++){
//            if (i==j)continue;
//            int difCount=0;
//            for (int k = 0 ; k<words[j].size();k++){
//                if (words[i][k]!=words[j][k]){
//                    difCount++;
//                }
//            }
//            if (difCount==1){
//                graph[i].push_back(j);
//            }
//        }
//    }
//    fill(visited,visited+51,-1);
//    answer=bfs(beginindex, targetindex);
//    return answer;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout<<solution("hot", "dog", {"hot", "dog"})<<'\n';
//}
