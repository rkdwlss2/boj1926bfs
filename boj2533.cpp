////
////  boj2533.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/28.
////
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//int n;
//vector<int> graph[1010101];
//vector<int> tree[1010101];
//int cache[1010101][2];
//void dfs(int now,int prev){
//    for (auto next : graph[now]){
//        if (next^prev){
//            tree[now].push_back(next);
//            dfs(next,now);
//        }
//    }
//}
//
//int dp(int now,int selected){
//    int& ret=cache[now][selected];
//    if (ret!=-1)return ret;
//    ret=0;
//    if (!selected){
//        for (auto next:tree[now]){
//            ret+=dp(next,1);
//        }
//    }else{
//        for (auto next:tree[now]){
//            ret+=min(dp(next,0),dp(next,1));
//        }
//        ret++;
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n-1;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    dfs(1,0);
//    memset(cache,-1,sizeof(cache));
//    cout<<min(dp(1,0),dp(1,1))<<'\n';
//}
