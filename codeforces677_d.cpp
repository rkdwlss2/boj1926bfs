////
////  codeforces677_d.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/22.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n;
//int arr[5001];
//bool visited[5001];
//vector<vector<int>> graph(5001);
//vector<vector<int>> cho(5001);
//
//void bfs(int start){
//    queue<pair<int,int>> q;
//    q.push({start,arr[start]});
//    visited[start]=true;
//    while(!q.empty()){
//        pair<int,int> now =q.front();q.pop();
//        for (int i=0;i<graph[now.first].size();i++){
//            if (visited[graph[now.first][i]]==true)continue;
//            q.push({graph[now.first][i],arr[graph[now.first][i]]});
//            visited[graph[now.first][i]]=true;
//        }
//    }
//}
//
//void printbfs(int start){
//    queue<pair<int,int>> q;
//    q.push({start,arr[start]});
//    visited[start]=true;
//    while(!q.empty()){
//        pair<int,int> now =q.front();q.pop();
//        for (int i=0;i<graph[now.first].size();i++){
//            if (visited[graph[now.first][i]]==true)continue;
//            q.push({graph[now.first][i],arr[graph[now.first][i]]});
//            cout<<now.first+1<<' '<<graph[now.first][i]+1<<'\n';
//            visited[graph[now.first][i]]=true;
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while(c--){
//        cin>>n;
//        graph=cho;
//        fill(visited,visited+5001,false);
//        for (int i =0;i<n;i++)cin >> arr[i];
//        for (int i=0;i<n;i++){
//            for (int j=0;j<n;j++){
//                if (arr[i]==arr[j]){
//                    continue;
//                }
//                else{
//                    graph[i].push_back(j);
//                }
//            }
//        }
//        bfs(0);
//        int ok=true;
//        for (int i = 0 ;i<n;i++){
//            if (visited[i]==false){
//                ok=false;
//            }
//        }
//        if (ok==false){
//            cout<<"NO"<<'\n';
//        }
//        else{
//            cout<<"YES"<<'\n';
//            fill(visited,visited+5001,false);
//            printbfs(0);
//        }
//        
//    }
//}
