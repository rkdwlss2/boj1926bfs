////
////  boj5014.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/08.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int f,s,g,u,d;
//int check[1000001];
//
//
//int dx[2];
//
//int bfs(int sx){
//    if (sx==g){
//        return 0;
//    }
//    queue<int> q;
//    q.push(sx);
//    check[sx]=0;
//    while (!q.empty()){
//        auto now = q.front();q.pop();
//        for (int dir =0;dir<2;dir++){
//            int nx=now+dx[dir];
//            if (nx<1||nx>f)continue;
//            if (check[nx]!=-1)continue;
//            check[nx]=check[now]+1;
//            if (nx==g){
//                return check[nx];
//            }
//            q.push(nx);
//        }
//    }
//    return -1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>f>>s>>g>>u>>d;
//    fill(check,check+1000001,-1);
////    fill(check,check+1001,-1);
//
//    dx[0]=u;
//    dx[1]=-d;
//    int ans=bfs(s);
//    if (ans==-1){
//        cout<<"use the stairs"<<'\n';
//    }else{
//        cout<<ans<<'\n';
//    }
//}
