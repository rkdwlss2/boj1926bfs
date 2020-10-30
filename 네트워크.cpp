////
////  네트워크.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/29.
////
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//vector<vector<int>> computer;
//int visited[201];
//
//void bfs(int x){
//    queue<int> q;
//    q.push(x);
//    visited[x]=true;
//    while(!q.empty()){
//        int now=q.front();q.pop();
//        for (int dir=0;dir<computer[now].size();dir++){
//            if (computer[now][dir]==false)continue;
//            if (visited[dir]==true)continue;
//            visited[dir]=true;
//            q.push(dir);
//        }
//    }
//}
//int solution(int n, vector<vector<int>> computers) {
//    int answer = 0;
//    computer=computers;
//    for (int i =0;i<n;i++){
//        if (visited[i]==false){
//            bfs(i);
//            answer++;
//        }
//    }
//    return answer;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<vector<int>> com={{1,1,0},{1,1,0},{0,0,1}};
//    cout<<solution(3,com)<<'\n';
//}
