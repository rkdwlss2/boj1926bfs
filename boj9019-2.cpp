////
////  boj9019-2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/02.
////
//
//#include <iostream>
//#include <string>
//#include <queue>
//#include <cstring>
//using namespace std;
//int start,answer;
//bool visited[10000];
//string bfs(){
//    string ans;
//    queue<pair<int,string>> q;
//    q.push({start,""});
//    visited[start]=true;
//    while (!q.empty()){
//        int now=q.front().first;
//        string str=q.front().second;
//        q.pop();
//        if (now==answer){
//            q=queue<pair<int,string>>();
//            return str;
//        }
//        if (visited[(2*now)%10000]==false){
//            visited[(2*now)%10000]=true;
//            q.push({(2*now)%10000,str+'D'});
//        }
//        if (now==0){
//            if (visited[9999]==false){
//                visited[9999]=true;
//                q.push({9999,str+'S'});
//            }
//        }
//        else{
//            if (visited[now-1]==false){
//                visited[now-1]=true;
//                q.push({now-1,str+'S'});
//            }
//        }
//        if (now!=0){
//            if (visited[(now%1000)*10+now/1000]==false){
//                visited[(now%1000)*10+now/1000]=true;
//                q.push({(now%1000)*10+now/1000,str+'L'});
//            }
//            if (visited[(now%10)*1000+now/10]==false){
//                visited[(now%10)*1000+now/10]=true;
//                q.push({(now%10)*1000+now/10,str+'R'});
//            }
//        }
//    }
//    return "";
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        cin>>start>>answer;
//        memset(visited,false,sizeof(visited));
//        cout<<bfs()<<'\n';
//    }
//}
