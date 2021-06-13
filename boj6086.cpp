////
////  boj6086.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/05.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//const int MAX_V=65;
//const int INF=987654321;
//int V;
//
//int capacity[MAX_V][MAX_V], flow[MAX_V][MAX_V];
//
//int networkFlow(int source, int sink){
//    memset(flow, 0, sizeof(flow));
//    int totalFlow=0;
//    while (true){
//        vector<int> parent(MAX_V,-1);
//        queue<int> q;
//        parent[source]=source;
//        q.push(source);
//        while (!q.empty()){
//            int here=q.front();q.pop();
//            for (int there=0;there<V;++there){
//                if (capacity[here][there]-flow[here][there]>0&&parent[there]==-1){
//                    q.push(there);
//                    parent[there]=here;
//                }
//            }
//        }
//        if (parent[sink]==-1)break;
//        int amount=INF;
//        for (int p=sink;p!=source;p=parent[p]){
//            amount=min(capacity[parent[p]][p]-flow[parent[p]][p],amount);
//        }
//        
//        for (int p=sink;p!=source;p=parent[p]){
//            flow[parent[p]][p]+=amount;
//            flow[p][parent[p]]-=amount;
//        }
//        totalFlow+=amount;
//    }
//    return totalFlow;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    V=65;
//    memset(capacity, 0, sizeof(capacity));
//    for (int i=0;i<n;i++){
//        char a,b;
//        int c;
//        cin>>a>>b>>c;
//        
//        int a1=a-'A';
//        int b1=b-'A';
//        
//        capacity[a1][b1]+=c;
//        capacity[b1][a1]+=c;
//    }
//    cout<<networkFlow(0,25)<<'\n';
//}
//
