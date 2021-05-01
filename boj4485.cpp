////
////  boj4485.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/28.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#define INF 1e9
//
//using namespace std;
//vector<pair<int, int> > graph[100001];
//int d[100001];
//
//int n, m, start=0;
//bool check(int x,int y){
//    return x>=0&&x<n&&y>=0&&y<n;
//}
//void dijkstra(int start){
//    priority_queue<pair<int,int>> pq;
//    pq.push({0,start});
//    d[start]=0;
//    while (!pq.empty()){
//        int dist=-pq.top().first;
//        int now = pq.top().second;
//        pq.pop();
//        if (d[now]<dist)continue;
//        for (int i = 0 ; i <graph[now].size();i++){
//            int cost = dist+graph[now][i].second;
//            if (cost<d[graph[now][i].first]){
//                d[graph[now][i].first]=cost;
//                pq.push({-cost, graph[now][i].first});
//            }
//        }
//    }
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int count=1;
//    while (true){
//        cin>>n;
//        if (n==0)break;
//        m=(n-1)*n*2;
//        int z=-1;
//        for (int i = 0 ; i < 100001;i++){
//            graph[i].clear();
//        }
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j <n;j++){
//                int tmp;
//                cin>>tmp;
//                if (i==0&&j==0)z=tmp;
//                int num=i*n+j;
//                int left=i*n+j-1;
//                int right=i*n+j+1;
//                int up=(i-1)*n+j;
//                int down=(i+1)*n+j;
//                if (check(i,j-1)){
//                    graph[left].push_back({num,tmp});
//                }if (check(i,j+1)){
//                    graph[right].push_back({num,tmp});
//                }if (check(i+1,j)){
//                    graph[down].push_back({num,tmp});
//                }if (check(i-1,j)){
//                    graph[up].push_back({num,tmp});
//                }
//            }
//        }
//        
//        fill(d,d+100001,INF);
//        
//        dijkstra(start);
//        cout<<"Problem "<<count<<": ";
//        count++;
//        cout<<d[(n-1)*n+n-1]+z<<'\n';
//    }
//}
