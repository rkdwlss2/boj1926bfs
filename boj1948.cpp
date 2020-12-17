////
////  boj1948.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/15.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int n,m;
//
//vector<pair<int,int>> a[10001];
//vector<pair<int,int>> b[10001];
//int ind[10001];
//int ind2[10001];
//int d[10001];
//int c[10001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i<m;i++){
//        int t1,t2,t3;
//        cin>>t1>>t2>>t3;
//        a[t1].push_back({t2,t3});
//        b[t2].push_back({t1,t3});
//        ind[t2]++;
//        ind2[t1]++;
//    }
//    int st,ed;
//    cin>>st>>ed;
//    queue<int> q;
//    for (int i = 1 ; i <=n;i++){
//        if (ind[i]==0){
//            q.push(i);
//        }
//    }
//    while (!q.empty()){
//        int x=q.front();
//        q.pop();
//        for (int k = 0 ;k<a[x].size();k++){
//            int y=a[x][k].first;
//            d[y]=max(d[y],d[x]+a[x][k].second);
//            ind[y]-=1;
//            if (ind[y]==0){
//                q.push(y);
//            }
//        }
//    }
//    cout<<d[ed]<<'\n';
//    for (int i = 1;i<=n;i++){
//        ind[i]=ind2[i];
//    }
//    int ans=0;
//    c[ed]=true;
//    for (int i = 1;i<=n;i++){
//        if (ind[i]==0){
//            q.push(i);
//        }
//    }
//    while (!q.empty()){
//        int x=q.front();
//        q.pop();
//        for (int k = 0 ; k<b[x].size();k++){
//            int y=b[x][k].first;
//            if (c[x]&&d[x]-d[y]==b[x][k].second){
//                c[y]=true;
//                ans+=1;
//            }
//            ind[y]-=1;
//            if (ind[y]==0){
//                q.push(y);
//            }
//        }
//    }
//    cout<<ans<<'\n';
//}
