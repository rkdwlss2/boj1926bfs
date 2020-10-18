////
////  startlink.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/15.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int d1[1000001];
//bool visited[1000001];
//int f,s,g,u,d;
//int bfs(int n){
//    queue<int> q;
//    q.push(n);
//    visited[n]=true;
//    d1[n]=0;
//    while(!q.empty()){
//        int now=q.front();q.pop();
//        if (now<s-d||now>g+u)continue;
//        if (visited[now]==true)continue;
//        d1[n+u]=d1[now]+1;
//        d1[n-d]=d1[now]+1;
//        visited[n+u]=true;
//        visited[n-d]=true;
//        q.push(n+u);
//        q.push(n-d);
//    }
//    return -1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>f>>s>>g>>u>>d;
//    fill(d1,d1+1000001,-1);
//    bfs(s);
//    if (d1[g]==-1){
//        cout<<"use the stairs"<<'\n';
//    }
//    else{
//    cout<<d1[g]<<'\n';
//    }
//}
