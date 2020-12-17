////
////  boj1693.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/27.
////
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//#define lli long long int
//lli inf=1e16;
//lli n;
//lli cache[100010][20];
//
//vector<lli> graph[100010];
//vector<lli> tree[100010];
//void dfs(lli start,lli prev){
//    for (lli i = 0 ; i < graph[start].size();i++){
//        lli next=graph[start][i];
//        if (prev!=next){
//            tree[start].push_back(next);
//            dfs(next,start);
//        }
//    }
//}
//lli dp(lli start,lli preColor){
//    lli& ret=cache[start][preColor];
//    if (ret!=-1)return ret;
//    int ans=0;
//    for (lli i=0;i<tree[start].size();i++){
//        lli tmp=inf;
//        lli next=tree[start][i];
//        for (lli j=1;j<=20;j++){
//            if (preColor!=j){
//                tmp=min(tmp,dp(next,j));
//            }
//        }
//        ans+=tmp;
//    }
//    return ret=ans+preColor;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n-1;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    dfs(1,1);
//    memset(cache,-1,sizeof(cache));
//    lli maxi=inf;
//    for (lli i = 1;i<=20;i++){
//        lli tmp=dp(1,i);
//        if (tmp<maxi){
//            maxi=tmp;
//        }
//    }
//    cout<<maxi<<'\n';
//}
