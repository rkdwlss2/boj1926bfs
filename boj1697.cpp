////
////  boj1697.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/27.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n,k;
//int dp[100001];
//
//int bfs(int index){
//    queue<pair<int,int>> q;
//    q.push({index,0});
//    dp[index]=1;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int position=now.first;
//        int count=now.second;
//        int dx[3]={position+1,position-1,position*2};
//        for (int dir = 0 ; dir < 3;dir++){
//            int nx=dx[dir];
//            if (nx<0||nx>100000)continue;
//            if (dp[nx]>0)continue;
//            if (nx==k){
//                return count+1;
//            }
//            dp[nx]=1;
//            q.push({nx,count+1});
//        }
//
//    }
//    return 0;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    fill(dp,dp+100001,0);
//    cout<<bfs(n)<<'\n';
//}
