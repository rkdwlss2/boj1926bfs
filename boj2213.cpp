////
////  boj2213.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/27.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> graph[10010];
//vector<int> tree[10010];
//const int inf =1e9;
//int maxi=-inf;
//int cache[10010][2];
//int cost[10010];
//int visited[10010];
//vector<int> answer;
//void dfs(int now,int prev){
//    for (int i = 0 ; i<graph[now].size();i++){
//        int next=graph[now][i];
//        if (prev!=next){
//            tree[now].push_back(next);
//            dfs(next,now);
//        }
//    }
//}
//
//int dp(int now ,int selected){
//    int& ret = cache[now][selected];
//    if (ret!=-1)return ret;
//    if (selected){
//        int ans=0;
//        for (int i = 0 ; i<tree[now].size();i++){
//            int next=tree[now][i];
//            ans+=dp(next,0);
//        }
//        return ret=ans+cost[now];
//    }else{
//        int ans=0;
//        for (int i = 0 ; i<tree[now].size();i++){
//            int next=tree[now][i];
//            int t1=dp(next,0);
//            int t2=dp(next,1);
//            if (t1<t2){
//                visited[next]=1;
//            }else{
//                visited[next]=0;
//            }
//            ans+=max(t1,t2);
//        }
//        return ret=ans;
//    }
//}
//void trace(int now,int selected){
//    if (selected){
//        answer.push_back(now);
//        for (int i = 0 ;i<tree[now].size();i++){
//            int next=tree[now][i];
//            trace(next, 0);
//        }
//    }else{
//        for (int i = 0 ;i<tree[now].size();i++){
//            int next=tree[now][i];
//            trace(next, visited[next]);
//        }
//    }
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 1 ; i <= n;i++){
//        cin>>cost[i];
//        cache[i][0]=cache[i][1]=-1;
//    }
//    for (int i = 0 ; i <n-1;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    dfs(1,1);
//    int t1=dp(1,0);
//    int t2=dp(1,1);
//    maxi=max(t1,t2);
//    if (t1<t2){
//        visited[1]=1;
//    }else{
//        visited[1]=0;
//    }
//    cout<<maxi<<'\n';
//    trace(1, visited[1]);
//    sort(answer.begin(), answer.end());
//    for (auto i : answer){
//        cout<<i<<' ';
//    }
//}
